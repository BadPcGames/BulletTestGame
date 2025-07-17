using NUnit.Framework;
using System.Collections.Generic;
using UnityEngine;

public class LevelGeneratorScript : MonoBehaviour
{
    [SerializeField] private float distanceBetweenObstacles = 7f;
    [SerializeField] private List<GameObject> obstacles;
    [SerializeField] private GameObject player;
    [SerializeField] private GameObject door;

    private float position = -10;

    private void Start()
    {
        Instantiate(player, new Vector3(0, 0, position), new Quaternion());
        GenerateObstacles();
        Instantiate(door, new Vector3(0, 1, position+distanceBetweenObstacles), new Quaternion());
    }

    private void GenerateObstacles()
    {
        for (int i = 0; i < obstacles.Count; i++)
        {
            int randIndex = Random.Range(i, obstacles.Count);
            (obstacles[i], obstacles[randIndex]) = (obstacles[randIndex], obstacles[i]);
        }

        foreach (GameObject obstacle in obstacles)
        {
            position+= distanceBetweenObstacles;
            Instantiate(obstacle, new Vector3(0, 0, position), new Quaternion());
        }
    }


}
