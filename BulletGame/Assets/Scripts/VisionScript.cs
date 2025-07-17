using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;

public class VisionScript : MonoBehaviour
{
    public delegate void KilledEnemy();
    public static event KilledEnemy OnKilledEnemy;

    public delegate void FindEnemy();
    public static event FindEnemy OnFindEnemy;

    private HashSet<EnemyScript> visibleEnemies = new HashSet<EnemyScript>();
    private BoxCollider visionCollider;


    private void Awake()
    {
        visionCollider = GetComponent<BoxCollider>();
        visionCollider.isTrigger = true;
    }

    private void OnEnable()
    {
        EnemyScript.OnEnemyDestroyed += HandleEnemyDestroyed;
    }

    private void OnDisable()
    {
        EnemyScript.OnEnemyDestroyed -= HandleEnemyDestroyed;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Enemy") && other.TryGetComponent(out EnemyScript enemy))
        {
            visibleEnemies.Add(enemy);
            OnFindEnemy?.Invoke();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Enemy") && other.TryGetComponent(out EnemyScript enemy))
        {
            visibleEnemies.Remove(enemy);
            OnKilledEnemy?.Invoke();
        }
    }

    private void HandleEnemyDestroyed(EnemyScript enemy)
    {
        if (visibleEnemies.Remove(enemy))
            OnKilledEnemy?.Invoke();
    }

    public void RefreshEnemies()
    {
        Vector3 worldCenter = transform.TransformPoint(visionCollider.center);
        Vector3 halfExtents = Vector3.Scale(visionCollider.size * 0.5f, transform.lossyScale);
        Quaternion orientation = transform.rotation;

        Collider[] hits = Physics.OverlapBox(worldCenter, halfExtents, orientation);

        var current = new HashSet<EnemyScript>();
        foreach (var col in hits)
        {
            if (col != null && col.CompareTag("Enemy") && col.TryGetComponent(out EnemyScript e))
                current.Add(e);
        }

        foreach (var appeared in current.Except(visibleEnemies))
            OnFindEnemy?.Invoke();

        if (current.Count == 0 && visibleEnemies.Count > 0)
        {
            OnKilledEnemy?.Invoke();
        }

        visibleEnemies = current;
    }
}