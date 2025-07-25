# Building your project

When you build your project, Burst compiles your code and creates a single dynamic library in the Plugins folder for the platform you're targeting. For example, on Windows, the path is `Data/Plugins/lib_burst_generated.dll`. 

>[!NOTE]
>If your target platform is iOS, Unity instead generates a static library to meet Apple's submission requirements for TestFlight.

The job system runtime loads the generated library the first time a Burst compiled method is invoked. 

To control Burst's AOT compilation, use the settings in the **Burst AOT Settings** section of the Player Settings window (**Edit &gt; Player Settings &gt; Burst AOT Settings**). For more information, refer to [Burst AOT Settings reference](building-aot-settings.md).

<a name="cross-compilation"></a>

## Platforms without cross compilation

If you're compiling for a non-desktop platform, Burst compilation requires specific platform compilation tools (similar to [IL2CPP](https://docs.unity3d.com/Manual/IL2CPP.html)). By default, desktop platforms (macOS, Linux, Windows) don't need external toolchain support, unless you enable the **Use Platform SDK Linker** setting in the [Burst AOT Settings](building-aot-settings.md). 

The table below lists the level of support for AOT compilation on each platform. If you select an invalid target (one with missing tools, or unsupported), Unity doesn't use Burst compilation, but still builds the target without Burst optimizations. 

>[!NOTE]
>Burst supports cross-compilation between desktop platforms (macOS/Linux/Windows) by default.

| **Host Editor platform** | **Target Player platform** | **Supported CPU architectures** | **External toolchain requirements** |
|---|---|---|---|
| Windows | Windows | x86 (SSE2, SSE4)<br/> x64 (SSE2, SSE4, AVX, AVX2) | None |
| Windows | Universal Windows Platform | x86 (SSE2, SSE4)<br/> x64 (SSE2, SSE4, AVX, AVX2)<br/>ARM32 (Thumb2, Neon32)<br/>ARMV8 AARCH64<br/><br/>**Note:** A UWP build always compiles all four targets.| Visual Studio 2017<br/>Universal Windows Platform Development Workflow<br/>C++ Universal Platform Tools |
| Windows | iOS | ARMV8 AARCH64 | See Note 2 below |
| Windows | tvOS | ARMV8 AARCH64 | See Note 2 below |
| Windows | visionOS | ARMV8 AARCH64 | See Note 2 below |
| Windows | visionOS Simulator | ARMV8 AARCH64 | See Note 2 below |
| Windows | Android | x86 SSE2<br/> ARMV7 (Thumb2, Neon32)<br/> ARMV8 AARCH64 (ARMV8A, ARMV8A_HALFFP, ARMV9A) | Android NDK<br/><br/>**Important:** Use the Android NDK that you install through Unity Hub (via **Add Component**). Burst falls back to the one that the `ANDROID_NDK_ROOT` environment variable specifies if the Unity external tools settings aren't configured. |
| Windows | Magic Leap 2 | ARMV8 AARCH64 | From Unity 6, Magic Leap 2 requires the [OpenXR plugin](https://docs.unity3d.com/Packages/com.unity.xr.openxr@latest). |
| Windows | Xbox One | x64 SSE4 | Microsoft GDK |
| Windows | Xbox Series | x64 AVX2 | Microsoft GDK |
| Windows | PlayStation 4 | x64 SSE4 | Minimum PS4 SDK version 8.00 |
| Windows | PlayStation 5 | x64 AVX2 | Minimum PS5 SDK version 2.00 |
| Windows | Nintendo Switch | ARMV8 AARCH64 | None |
| macOS | macOS | x64 (SSE2, SSE4, AVX, AVX2), Apple Silicon | None |
| macOS | iOS | ARMV8 AARCH64 | See Note 2 below |
| macOS | tvOS | ARMV8 AARCH64 | See Note 2 below |
| macOS | visionOS | ARMV8 AARCH64 | See Note 2 below |
| macOS | visionOS Simulator | ARMV8 AARCH64 | See Note 2 below |
| macOS | Android | x86 SSE2<br/> ARMV7 (Thumb2, Neon32)<br/> ARMV8 AARCH64 (ARMV8A, ARMV8A_HALFFP, ARMV9A) | Android NDK<br/><br/>**Important:** Use the Android NDK that you install through Unity Hub (via **Add Component**). Burst falls back to the one that the `ANDROID_NDK_ROOT` environment variable specifies if the Unity external tools settings aren't configured. |
| macOS | Magic Leap 2 | ARMV8 AARCH64 | From Unity 6, Magic Leap 2 requires the [OpenXR plugin](https://docs.unity3d.com/Packages/com.unity.xr.openxr@latest). |
| Linux | Linux | x64 (SSE2, SSE4, AVX, AVX2) | None |
| Linux | iOS | ARMV8 AARCH64 | See Note 2 below |
| Linux | tvOS | ARMV8 AARCH64 | See Note 2 below |
| Linux | visionOS | ARMV8 AARCH64 | See Note 2 below |
| Linux | visionOS Simulator | ARMV8 AARCH64 | See Note 2 below |

Note 1: the maximum target CPU is hardcoded per platform. For standalone builds that target desktop platforms (Windows/Linux/macOS) you can choose the supported targets via the [Burst AOT Settings](building-aot-settings.md)

Note 2: on Unity 2022.3 and above, Burst supports compilation for iOS / tvOS / visionOS / visionOS Simulator from all desktop platforms. However, to build the resulting Xcode project, you'll need macOS with Xcode installed. On Unity 2021.3, Burst only supports compilation for iOS / tvOS from macOS, and you'll need Xcode with command line tools installed (`xcode-select --install`).

### Projects that don't use Burst

Some projects can't use Burst as the compiler:

* Android projects from the Linux Editor
* Xcode projects generated from the **Create Xcode Project** option

## Multiple Burst targets

When Burst compiles multiple target platforms during a build, it has to perform separate compilations. For example, if you want to compile `X64_SSE2` and `X64_SSE4`, Burst has to do two separate compilations to generate code for each of the targets you choose.

To keep the combinations of targets to a minimum, Burst target platforms require multiple processor instruction sets underneath:

* `SSE4.2` is gated on having `SSE4.2` and `POPCNT` instruction sets.
* `AVX2` is gated on having `AVX2`, `FMA`, `F16C`, `BMI1`, and `BMI2` instruction sets.
* `ARMV8A` is a basic Armv8-A CPU target
* `ARMV8A_HALFFP` is `ARMV8A` plus the following extensions: `fullfp16`, `dotprod`, `crypto`, `crc`, `rdm`, `lse`. In practice, this means Cortex A75/A55 and later cores.
* `ARMV9A` is `ARMV8A_HALFFP` plus SVE2 support. In practice, this means Cortex X2/A710/A510 and later cores. **Important:** this target is currently experimental.

## Dynamic dispatch based on runtime CPU features 

For all `x86`/`x64` CPU desktop platforms, as well as for 64-bit Arm on Android, Burst takes into account the CPU features available at runtime to dispatch jobs to different versions it compiles.

For `x86` and `x64` CPUs, Burst supports `SSE2` and `SSE4` instruction sets at runtime only. 

For example, with dynamic CPU dispatch, if your CPU supports `SSE3` and below, Burst selects `SSE2` automatically.

## Additional resources

* [Burst AOT Settings reference](building-aot-settings.md)
* [Editor reference](editor-reference-overview.md)