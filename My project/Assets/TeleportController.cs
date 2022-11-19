using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Ineraction.Toolkit;

public class TeleportController : MonoBehaviour
{
    public XRController leftController;
    public XRController rightController;
    public inputHelpers.Button teleportRayButton;
    public float activationThreshold = 0.1f;

    private XrInteractorLineVisual leftRay;
    private Gameobject leftReticle;

    private XrInteractorLineVisual rightRay;
    private Gameobject rightReticle;

    // Start is called before the first frame update
    
    void Start()
    {
        leftRay = leftController.gameobject.GetComponent<XrInteractorLineVisual>();
        leftReticle = leftRay.retical;

        rightRay = rightController.gameobject.GetComponent<XrInteractorLineVisual>();
        rightReticle = rightRay.retical;
    }

    // Update is called once per frame

    void Update()
    {
        bool leftIsPressed = checkIfButtonDown(leftController);
        leftRay.enabled = leftIsPressed;
        leftReticle.SetActive(leftIsPressed);

        bool rightIsPressed = checkIfButtonDown(rightController);
        rightRay.enabled = rightIsPressed;
        rightReticle.SetActive(rightIsPressed);
    }

    public bool checkIfButtonDown(XRController controller)
    {
        inputHelpers.IsPressed(controller.inputDevice, teleportRayButton, out bool isPressed, activationThreshold);
        return isPressed;
    }
}


