using UnityEngine;

public class CameraPositionScript : MonoBehaviour
{
    [SerializeField] private float offsetY;
    [SerializeField] private float offsetZ;
    [SerializeField] private string goalTag;
    private GameObject goal;

    public bool GameMode = true;

    private void Update()
    {
        if (GameMode)
        {
            if (goal == null)
            {
                tryFindGoal();
            }
            else
            {
                Vector3 desiredPosition = goal.transform.position + new Vector3(0, offsetY, offsetZ);
                transform.position = Vector3.Lerp(transform.position, desiredPosition, 5f * Time.deltaTime);
            }
        }
    }
    private void tryFindGoal()
    {
        goal=GameObject.FindGameObjectWithTag(goalTag);
    }

}
