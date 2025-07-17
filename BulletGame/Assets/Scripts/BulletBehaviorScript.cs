using UnityEngine;

public class BulletBehaviorScript : MonoBehaviour
{
    [SerializeField] GameObject boomPrefab;
    [SerializeField] float speed=1f;

    private bool ready=false;
    public void setReady(bool value)
    {
        ready = value;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Enemy")
        {
            GameObject boom = Instantiate(boomPrefab, transform.position, transform.rotation);
            boom.transform.localScale = transform.localScale;
            Destroy(gameObject);
          
        }
    }
    private void Update()
    {
        if (ready)
        {
            Move();
        }    
    }
    private void Move()
    {
        transform.position += new Vector3(0, 0, speed * Time.deltaTime);
    }

}
