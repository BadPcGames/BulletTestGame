using UnityEngine;

public class EnemyScript : MonoBehaviour
{
    public static event System.Action<EnemyScript> OnEnemyDestroyed;

    private void OnDestroy()
    {
        OnEnemyDestroyed?.Invoke(this);
    }
}

