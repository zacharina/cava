using System;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class CavaAPI : MonoBehaviour
{
#if UNITY_EDITOR || UNITY_STANDALONE
    const string dllname = "CavaLibrary";
#elif UNITY_IOS
    const string dllname = "__Internal";
#endif
    
    [DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr create_human(int age, int gender, double height, double weight, double temperature);
    [DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]
    private static extern void delete_human(IntPtr value);
    [DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]
    private static extern int human_age(IntPtr value);
    [DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]
    private static extern void cardiovascular_system(IntPtr value, double time, double oxygen);
    [DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]
    private static extern void die(IntPtr value);
    [DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]
    private static extern void resuscitate(IntPtr value);
    [DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]
    private static extern void artificial_coma(IntPtr value);
    
    public Button startButton, comaButton, resusButton, timeButton, tracheaButton, lungButton, heartButton, bloodButton, tissueButton;
    
    public int age = 25;
    public double height = 160;
    public double weight = 50;
    public int gender = 1;
    public double temperature = 37;

    private IntPtr humanPointer;
    private bool alive = false;
    private double oxygen = 100;

    void Start()
    {
        int[] arr = { 2};

        humanPointer = create_human(age, gender, height, weight, temperature);
        Debug.Log("Cardiovascular System ready to start");
        startButton.onClick.AddListener(StartCardiovascularSystem);
        resusButton.onClick.AddListener(Resuscitate);
        comaButton.onClick.AddListener(Coma);
    }

    private void OnDestroy()
    {
        delete_human(humanPointer);
        humanPointer = IntPtr.Zero;
    }

    private void StartCardiovascularSystem()
    {
        alive = true;
    }
    private void Resuscitate()
    {
        resuscitate(humanPointer);
    }

    private void Coma()
    {
        artificial_coma(humanPointer);
    }
}