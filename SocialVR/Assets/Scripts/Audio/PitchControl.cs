using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PitchControl : MonoBehaviour
{
    public AudioSource audioSource;
    public Slider pitchSlider;

    
    
    void Start()
    {
        //Set the slider value to the current pitch of the audio source
        pitchSlider.value = audioSource.pitch;
    }

    void Update()
    {
        //Update the pitch of the audio source based on the slider value
        audioSource.pitch = pitchSlider.value;
    
    }
}