using UnityEngine;

public class DoorScript : MonoBehaviour
{
    public delegate void LevelComplited();
    public static event LevelComplited OnLevelComplited;

    private void OnTriggerEnter(Collider other)
    {
       if (other.tag == "Player")
       {
            Destroy(other.gameObject);
            OnLevelComplited?.Invoke();
       }
    }
}
