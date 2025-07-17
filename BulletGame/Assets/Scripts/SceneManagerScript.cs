using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneManagerScript : MonoBehaviour
{
    [SerializeField] private GameObject LoseUI;
    [SerializeField] private GameObject WinUi;

    private void OnEnable()
    {
        DoorScript.OnLevelComplited += Win;
        PlayerScript.OnPlayerDied += Lose;
    }
    private void OnDisable()
    {
        DoorScript.OnLevelComplited -= Win;
        PlayerScript.OnPlayerDied -= Lose;
    }
    private void Win()
    {
        WinUi.SetActive(true);
    }
    private void Lose()
    {
        LoseUI.SetActive(true);
    }
    public void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
