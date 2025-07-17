using UnityEngine;

public class ExplouseScript : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Enemy")
        {
            Destroy(other.transform.gameObject);
        }
    }
}
