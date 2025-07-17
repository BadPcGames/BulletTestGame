using UnityEngine;

public class PlayerScript : MonoBehaviour
{
    [SerializeField] private GameObject playerUi;
    [SerializeField] private State currentState = State.move;
    [SerializeField] private GameObject VisionColider;
    [SerializeField] private GameObject BulletPrefab;
    [SerializeField] private float speed = 3f;
    [SerializeField] private float health = 1f;
    private bool chargingBullet=false;
    private float bulletPower;
    private GameObject bullet;

    private enum State
    {
        move,fire,dead
    }

    public delegate void PlayerDied();
    public static event PlayerDied OnPlayerDied;

    public void StartChargingBullet()
    {
        VisionColider.SetActive(false);
        bulletPower = 0;
        bullet = Instantiate(BulletPrefab, transform.position+new Vector3(0,1,1.5f), transform.rotation);
        chargingBullet = true;
    }
    public void EndChargingBullet()
    {
        VisionColider.SetActive(true);
        bullet.GetComponent<BulletBehaviorScript>().setReady(true);
        chargingBullet = false;
        VisionColider.GetComponent<VisionScript>().RefreshEnemies();
    }

    private void OnEnable()
    {
        VisionScript.OnFindEnemy += Stop;
        VisionScript.OnKilledEnemy += ReadyToMove;
    }
    private void OnDisable()
    {
        VisionScript.OnFindEnemy -= Stop;
        VisionScript.OnKilledEnemy -= ReadyToMove;
    }
    private void Update()
    {
        if (currentState == State.move)
        {
            Move();
        }
        if (chargingBullet&&currentState==State.fire)
        {
            ChargeBullet();
        }
    }
    private void ChargeBullet()
    {
        bulletPower += 0.1f* Time.deltaTime;
        TakeDamage(0.1f * Time.deltaTime);
        bullet.transform.localScale = new Vector3(1, 1, 1) * bulletPower*5;
    }
    public void TakeDamage(float Value)
    {
        if (health - Value <= 0.2)
        {
            currentState = State.dead;
            playerUi.SetActive(false);
            OnPlayerDied?.Invoke();
        }
        else
        {
            health -= Value;
            transform.localScale = new Vector3(health, 1,1) ;
        }
    }
    private void Stop()
    {
        playerUi.SetActive(true);
        currentState = State.fire;
    }
    private void ReadyToMove()
    {
        playerUi.SetActive(false);
        currentState = State.move;
    }
    private void Move()
    {
        transform.position += new Vector3(0, 0, speed * Time.deltaTime);
    }
}
