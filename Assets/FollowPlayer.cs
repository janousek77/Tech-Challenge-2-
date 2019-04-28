using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour {
    //modified from https://answers.unity.com/questions/607100/how-to-make-an-ai-to-follow-the-player-in-2d-c.html
    public Transform target; //the target to follow (usually player)
    public float speed = 3f;
    public float distance = 1f;

    // Use this for initialization
    void Start () {
		
	}

    // Update is called once per frame
    void Update() {
        transform.LookAt(target.position);
        transform.Rotate(new Vector3(0, -90, 0), Space.Self);//correcting the original rotation
        if (Vector3.Distance(transform.position, target.position) > distance) {
            transform.Translate(new Vector3(speed * Time.deltaTime, 0, 0));
        }
    }
}
