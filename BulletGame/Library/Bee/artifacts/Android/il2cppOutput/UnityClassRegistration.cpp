extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_GraphicsStateCollectionSerializer();
	RegisterModule_GraphicsStateCollectionSerializer();

	void RegisterModule_HierarchyCore();
	RegisterModule_HierarchyCore();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_InputForUI();
	RegisterModule_InputForUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Properties();
	RegisterModule_Properties();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityAnalyticsCommon();
	RegisterModule_UnityAnalyticsCommon();

	void RegisterModule_VFX();
	RegisterModule_VFX();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioResource; template <> void RegisterUnityClass<AudioResource>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeProxyVolume; template <> void RegisterUnityClass<LightProbeProxyVolume>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class RayTracingShader; template <> void RegisterUnityClass<RayTracingShader>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class UIRenderer; template <> void RegisterUnityClass<UIRenderer>(const char*);
class VFXManager; template <> void RegisterUnityClass<VFXManager>(const char*);
class VFXRenderer; template <> void RegisterUnityClass<VFXRenderer>(const char*);
class VisualEffect; template <> void RegisterUnityClass<VisualEffect>(const char*);
class VisualEffectAsset; template <> void RegisterUnityClass<VisualEffectAsset>(const char*);
class VisualEffectObject; template <> void RegisterUnityClass<VisualEffectObject>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 88 non stripped classes
	//0. Animator
	RegisterUnityClass<Animator>("Animation");
	//1. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//2. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//3. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//4. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//5. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//6. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//7. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//8. AudioResource
	RegisterUnityClass<AudioResource>("Audio");
	//9. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//10. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//11. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//12. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//13. Camera
	RegisterUnityClass<Camera>("Core");
	//14. Component
	RegisterUnityClass<Unity::Component>("Core");
	//15. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//16. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//17. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//18. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//19. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//20. GameManager
	RegisterUnityClass<GameManager>("Core");
	//21. GameObject
	RegisterUnityClass<GameObject>("Core");
	//22. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//23. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//24. InputManager
	RegisterUnityClass<InputManager>("Core");
	//25. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//26. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//27. Light
	RegisterUnityClass<Light>("Core");
	//28. LightProbeProxyVolume
	RegisterUnityClass<LightProbeProxyVolume>("Core");
	//29. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//30. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//31. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//32. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//33. Material
	RegisterUnityClass<Material>("Core");
	//34. Mesh
	RegisterUnityClass<Mesh>("Core");
	//35. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//36. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//37. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//38. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//39. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//40. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//41. Object
	//Skipping Object
	//42. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//43. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//44. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//45. RayTracingShader
	RegisterUnityClass<RayTracingShader>("Core");
	//46. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//47. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//48. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//49. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//50. Renderer
	RegisterUnityClass<Renderer>("Core");
	//51. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//52. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//53. Shader
	RegisterUnityClass<Shader>("Core");
	//54. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//55. Skybox
	RegisterUnityClass<Skybox>("Core");
	//56. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//57. Sprite
	RegisterUnityClass<Sprite>("Core");
	//58. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//59. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//60. TagManager
	RegisterUnityClass<TagManager>("Core");
	//61. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//62. Texture
	RegisterUnityClass<Texture>("Core");
	//63. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//64. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//65. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//66. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//67. Transform
	RegisterUnityClass<Transform>("Core");
	//68. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//69. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//70. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//71. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//72. Collider
	RegisterUnityClass<Collider>("Physics");
	//73. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//74. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//75. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//76. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//77. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//78. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//79. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//80. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//81. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//82. UIRenderer
	RegisterUnityClass<UIRenderer>("UIElements");
	//83. VFXManager
	RegisterUnityClass<VFXManager>("VFX");
	//84. VFXRenderer
	RegisterUnityClass<VFXRenderer>("VFX");
	//85. VisualEffect
	RegisterUnityClass<VisualEffect>("VFX");
	//86. VisualEffectAsset
	RegisterUnityClass<VisualEffectAsset>("VFX");
	//87. VisualEffectObject
	RegisterUnityClass<VisualEffectObject>("VFX");

}
