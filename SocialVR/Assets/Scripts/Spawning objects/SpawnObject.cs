using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SpawnObject : MonoBehaviour
{
    public GameObject MycubePrefab;

    public void InstantiateCaller(GameObject prefab)
    {
        Instantiate(prefab);
        prefab.transform.localPosition = new Vector3(0,1,2);
    }
}


