using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {

	public CharacterController2D controller;

	public Animator animator;

	public float runSpeed = 40f;

	float horizontalMove = 0f;
	bool jump = false;
	bool crouch = false;


	// Update is called once per frame
	void Update () {

		animator.SetFloat ("Speed", Mathf.Abs (horizontalMove));

		horizontalMove = Input.GetAxisRaw("Horizontal") * runSpeed;

		if (Input.GetButtonDown("Jump"))
		{
			animator.SetBool ("isJumping", true);
			jump = true;
		}

		if (Input.GetButtonDown("Crouch"))
		{
			animator.SetBool ("isCrouching", true);
			crouch = true;
		} else if (Input.GetButtonUp("Crouch"))
		{
			crouch = false;
		}

	}

	public void onLanding(){
		animator.SetBool ("isJumping", false);
	}

	public void onCrouch(bool isCrouching){
		animator.SetBool ("isCrouching", isCrouching);
	}

	void FixedUpdate ()
	{
		// Move our character
		controller.Move(horizontalMove * Time.fixedDeltaTime, crouch, jump);
		jump = false;
	}
}
