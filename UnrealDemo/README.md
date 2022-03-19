# Unreal Project & CAVA

This is solely a demonstration on how to combine the CAVA library with an Unreal Engine project.

The basic steps are:
1. Create an Unreal project and make it c++ compatible. See [here](https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/ProgrammingWithCPP/) for more information.
2. Add a "Plugins" folder at this level and copy the .dll file from the Binaries folder of the repository.
3. Add a "Blueprint Function Library" script and import the library as well as all necessary functions as in this sample project (see UnrealDemo/Source/UnrealDemo/CavaConnection.h)
`FPlatformProcess::GetDllHandle(*filePath);`

    Most important to know is that you do not only import the function, but you have to create also a method for the actual call.
    `typedef int* (*_createHuman)(int age, int gender, double height, double weight, double temperature);`

4. Create a Blueprint, in which you put the in c++ created methods to use. 
5. Add the Blueprint to a map. 
