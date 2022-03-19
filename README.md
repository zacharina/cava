# CAVA - Simulation of the cardiovascular system

|  General Info  | |
| ---|---|
| IDE | Visual Studio 2019 |
| Engine 1 | Unreal Engine 4.25.4 |
| Engine 2 | Unity 3D 2020.3.9f1 |
| Target Device | PC |
| Contact | Sarah Hofmann sarah.hofmann@uni-wuerzburg.de|

### Abstract

This library simulates the basic workings of the human cardiovascular system. Divided into four major compartments (trachea, lung, heart, blood vessel), 'CAVA' provides the calculations of different properties specific for the compartments based on a predefined simple human.
The application is demonstrated in a Windows Form project, in which all properties can be observed, also with the option to change pre-defined constant parameters.
The connection to the Game Engines Unity and Unreal can be seen in sample project in the corresponding folders.

### Installation Guide

1. Clone the repository with HTTPS or SSH.
2. Open the 'Binaries' folder and start the .exe
3. OR install the [Unreal Engine](https://www.unrealengine.com/en-US/download).
      Version 4.25.4 is guaranteed to be compatible.
4. Open the project in the Unreal Engine and take a look at how to use the library with the engine.
5. OR install the [Unity Engine](https://unity3d.com/de/get-unity/download).
      Version 2020.3.9f1 is guaranteed to be compatible.
6. Open the project in the Unreal Engine and take a look at how to use the library with the engine.

## Repository Usage 

```
RepositoryRoot/
    ├── README.md           
    ├── Binaries/           // .exe of the Windows Forms project and .dll of CAVA
    ├── CavaLibrary/        // Visual Studio 19 Project of the library
    ├── CavaSystem/         // Visual Studio 19 Project of the sample application
    ├── UnityDemo/          // Unity Project with a sample scene
    └── UnrealDemo/         // Unreal Project with a sample scene 
```
