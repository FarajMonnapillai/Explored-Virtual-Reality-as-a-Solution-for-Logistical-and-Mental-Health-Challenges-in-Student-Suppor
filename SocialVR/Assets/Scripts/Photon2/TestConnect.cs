using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestConnect : MonoBehaviourPunCallbacks
{

    private void Start()
    {
        Debug.Log("Connecting to server.", this);
        PhotonNetwork.NickName = MasterManager.GameSettings.Nickname;
        PhotonNetwork.GameVersion = MasterManager.GameSettings.GameVersion;
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to server.", this);
        print(PhotonNetwork.LocalPlayer.NickName);

            PhotonNetwork.JoinLobby();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        Debug.Log("Failed to connect to Server: " + cause.ToString(), this);
    }

    public override void OnJoinedLobby()
    {
        print("Joined lobby");
    }
}
