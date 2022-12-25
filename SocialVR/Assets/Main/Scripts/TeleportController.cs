using System;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class TeleportController : MonoBehaviour{
    [SerializeField] private XRRayInteractor xrRayInteractor;
    [SerializeField] private ActionBasedController actionbasedController;
    [SerializeField] private XRDirectInteractor xrDirectInteractor;
    [SerializeField] private InputActionReference teleportActionRef;

    private void OnEnable(){
        teleportActionRef.action.performed += TeleportModeActivate;
        teleportActionRef.action.canceled += TeleportModeCancel;
    }

    private void TeleportModeActivate(InputAction.CallbackContext obj)
    {
        xrDirectInteractor.enabled = false;

        xrRayInteractor.enabled = true;
        actionbasedController.enableInputActions = true;
    }

    private void TeleportModeCancel(InputAction.CallbackContext obj) => Invoke(methodName:"DisableTeleport", time:0.05f);

    private void DisableTeleport()
    {
        xrDirectInteractor.enabled = true;

        xrRayInteractor.enabled = false;
        actionbasedController.enableInputActions = false;
    }

    private void onDisable(){
        teleportActionRef.action.performed -= TeleportModeActivate;
        teleportActionRef.action.canceled -= TeleportModeCancel;
    }
}