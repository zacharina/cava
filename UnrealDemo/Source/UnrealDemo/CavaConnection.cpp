// Fill out your copyright notice in the Description page of Project Settings.

#include "CavaConnection.h"
#include <string>  

void* v_dllHandle;
#pragma region Type defs for dll methods
typedef int* (*_createHuman)(int age, int gender, double height, double weight, double temperature);
_createHuman getCreateHumanFromDll;
typedef void (*_deleteHuman)(int* human);
_deleteHuman getDeleteHumanFromDll;

//Human info
typedef int (*_humanAge)(int* human);
_humanAge getHumanAgeFromDll;
typedef char* (*_humanGender)(int* human);
_humanGender getHumanGenderFromDll;
typedef double (*_humanWeight)(int* human);
_humanWeight getHumanWeightFromDll;
typedef double (*_humanHeight)(int* human);
_humanHeight getHumanHeightFromDll;
typedef double (*_humanTemperature)(int* human);
_humanTemperature getHumanTemperatureFromDll;

//Cardiovascular system
typedef double (*_cardiovascularSystem)(int* human, double time, double oxygen);
_cardiovascularSystem getCardiovascularSystemFromDll;
typedef void (*_die)(int* human);
_die getDieFromDll;
typedef void (*_resuscitate)(int* human);
_resuscitate getResuscitateFromDll;
typedef void (*_artificialComa)(int* human);
_artificialComa getArtificialComaFromDll;
#pragma endregion

bool UCavaConnection::importDLL(FString name)
{
    FString plugin_folder = "Plugins/";
    FString dll = ".dll";
    FString filePath = *FPaths::ProjectDir() + plugin_folder + name + dll;
    if (FPaths::FileExists(filePath))
    {
        v_dllHandle = FPlatformProcess::GetDllHandle(*filePath);
        if (v_dllHandle != NULL)
        {
            return true;
        }
    }
    return false;
}

void UCavaConnection::freeDLL(TArray<UHumanComponent*> humans)
{
    for (auto human : humans) {
        deleteHuman(human);
    }
    if (v_dllHandle != NULL)
    {
        getCreateHumanFromDll = NULL;
        getDeleteHumanFromDll = NULL;
        getHumanAgeFromDll = NULL;
        getHumanGenderFromDll = NULL;
        getHumanWeightFromDll = NULL;
        getHumanHeightFromDll = NULL;
        getHumanTemperatureFromDll = NULL;
        getCardiovascularSystemFromDll = NULL;
        getResuscitateFromDll = NULL;
        getDieFromDll = NULL;
        getArtificialComaFromDll = NULL;

        FPlatformProcess::FreeDllHandle(v_dllHandle);
        v_dllHandle = NULL;
    }
}

#pragma region Method Imports

#pragma region Human creation
bool UCavaConnection::importCreateHumanFunc()
{
    if (v_dllHandle != NULL)
    {
        getCreateHumanFromDll = NULL;
        FString procName = "create_human";
        getCreateHumanFromDll = (_createHuman)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getCreateHumanFromDll != NULL)
            return true;    
    }
    return false;
}

bool UCavaConnection::importDeleteHumanFunc()
{
    if (v_dllHandle != NULL)
    {
        getDeleteHumanFromDll = NULL;
        FString procName = "delete_human";
        getDeleteHumanFromDll = (_deleteHuman)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getDeleteHumanFromDll != NULL)
            return true;
    }
    return false;
}
#pragma endregion

#pragma region Human info
bool UCavaConnection::importHumanAgeFunc()
{
    if (v_dllHandle != NULL)
    {
        getHumanAgeFromDll = NULL;
        FString procName = "age";
        getHumanAgeFromDll = (_humanAge)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getHumanAgeFromDll != NULL)
            return true;
    }
    return false;
}

bool UCavaConnection::importHumanGenderFunc()
{
    if (v_dllHandle != NULL)
    {
        getHumanGenderFromDll = NULL;
        FString procName = "gender";
        getHumanGenderFromDll = (_humanGender)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getHumanGenderFromDll != NULL)
            return true;
    }
    return false;
}

bool UCavaConnection::importHumanWeightFunc()
{
    if (v_dllHandle != NULL)
    {
        getHumanWeightFromDll = NULL;
        FString procName = "weight";
        getHumanWeightFromDll = (_humanWeight)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getHumanWeightFromDll != NULL)
            return true;
    }
    return false;
}

bool UCavaConnection::importHumanHeightFunc()
{
    if (v_dllHandle != NULL)
    {
        getHumanHeightFromDll = NULL;
        FString procName = "height";
        getHumanHeightFromDll = (_humanHeight)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getHumanHeightFromDll != NULL)
            return true;
    }
    return false;
}

bool UCavaConnection::importHumanTemperatureFunc()
{
    if (v_dllHandle != NULL)
    {
        getHumanTemperatureFromDll = NULL;
        FString procName = "temperature";
        getHumanTemperatureFromDll = (_humanTemperature)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getHumanTemperatureFromDll != NULL)
            return true;
    }
    return false;
}
#pragma endregion

#pragma region Cardiovascular system
bool UCavaConnection::importCardiovascularSystemFunc()
{
    if (v_dllHandle != NULL)
    {
        getCardiovascularSystemFromDll = NULL;
        FString procName = "cardiovascular_system";
        getCardiovascularSystemFromDll = (_cardiovascularSystem)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getCardiovascularSystemFromDll != NULL)
            return true;
    }
    return false;
}

bool UCavaConnection::importDieFunc()
{
    if (v_dllHandle != NULL)
    {
        getDieFromDll = NULL;
        FString procName = "die";
        getDieFromDll = (_die)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getDieFromDll != NULL)
            return true;
    }
    return false;
}

bool UCavaConnection::importResuscitateFunc()
{
    if (v_dllHandle != NULL)
    {
        getResuscitateFromDll = NULL;
        FString procName = "resuscitate";
        getResuscitateFromDll = (_resuscitate)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getResuscitateFromDll != NULL)
            return true;
    }
    return false;
}

bool UCavaConnection::importArtificialComaFunc()
{
    if (v_dllHandle != NULL)
    {
        getArtificialComaFromDll = NULL;
        FString procName = "artificial_coma";
        getArtificialComaFromDll = (_artificialComa)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
        if (getArtificialComaFromDll != NULL)
            return true;
    }
    return false;
}
#pragma endregion

#pragma region Method Calls

#pragma region Human creation
UHumanComponent* UCavaConnection::createHuman(int age, int gender, float height, float weight, float temperature)
{
    if (getCreateHumanFromDll != NULL)
    {   
        UHumanComponent* human = NewObject<UHumanComponent>(UHumanComponent::StaticClass());
        human->InitHuman(getCreateHumanFromDll(age, gender, (double)height, (double)weight, (double)temperature));
        return human;
    }
    return NULL;
}

void UCavaConnection::deleteHuman(UHumanComponent* human)
{
    if (getDeleteHumanFromDll != NULL)
    {
        getDeleteHumanFromDll(human->human_ptr);
    }
}
#pragma endregion

#pragma region Human info
int UCavaConnection::humanAge(UHumanComponent* human)
{
    if (getHumanAgeFromDll != NULL)
    {
        int age = int(getHumanAgeFromDll(human->human_ptr));
        return age;
    }
    return -32202;
}

FString UCavaConnection::humanGender(UHumanComponent* human)
{
    if (getHumanGenderFromDll != NULL)
    {
        char* gender = getHumanGenderFromDll(human->human_ptr);
        FString gender_string = gender;
        return gender_string;
    }
    return "";
}

float UCavaConnection::humanHeight(UHumanComponent* human)
{
    if (getHumanHeightFromDll != NULL)
    {
        float height = float(getHumanHeightFromDll(human->human_ptr));
        return height;
    }
    return -34.8045265148f;
}

float UCavaConnection::humanWeight(UHumanComponent* human)
{
    if (getHumanWeightFromDll != NULL)
    {
        float weight = float(getHumanWeightFromDll(human->human_ptr));
        return weight;
    }
    return -34.8045265148f;
}

float UCavaConnection::humanTemperature(UHumanComponent* human)
{
    if (getHumanTemperatureFromDll != NULL)
    {
        float temperature = float(getHumanTemperatureFromDll(human->human_ptr));
        return temperature;
    }
    return -34.8045265148f;
}
#pragma endregion

#pragma region Cardiovascular system
void UCavaConnection::cardiovascularSystem(UHumanComponent* human, float time, float oxygen)
{
    if (getCardiovascularSystemFromDll != NULL)
    {
        getCardiovascularSystemFromDll(human->human_ptr, (double)time, (double)oxygen);
    }
}

void UCavaConnection::die(UHumanComponent* human)
{
    if (getDieFromDll != NULL)
    {
        getDieFromDll(human->human_ptr);
    }
}
    
void UCavaConnection::resuscitate(UHumanComponent* human)
{
    if (getResuscitateFromDll != NULL)
    {
        getResuscitateFromDll(human->human_ptr);
    }
}

void UCavaConnection::artificialComa(UHumanComponent* human)
{
    if (getArtificialComaFromDll != NULL)
    {
        getArtificialComaFromDll(human->human_ptr);
    }
}
#pragma endregion

#pragma endregion