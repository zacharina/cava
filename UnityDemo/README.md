# Unity Project & CAVA

This is solely a demonstration on how to combine the CAVA library with an Unity 3D project.

The basic steps are:
1. Create a Unity project. See [here](https://unity.com/learn/get-started) for more information.
2. Add a "Scripts" folder as a subfolder of "Assets". Copy the .dll file from the Binaries folder of the repository.
3. Create a c# script in the "Scripts" folder and make it a [MonoBehaviour](https://docs.unity3d.com/ScriptReference/MonoBehaviour.html).
4. Import the CAVA library as in UnityDemo/Assets/Scripts/CavaAPI.cs. 

    `[DllImport(dllname, CallingConvention = CallingConvention.Cdecl)]`

    `private static extern IntPtr create_human(int age, int gender, double height, double weight, double temperature);`

    Note: As there are no pointer in c#, pointer from CAVA can be handled as IntPtr in Unity. 

5. Add the script to a scene.
