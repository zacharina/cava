// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HumanComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CavaConnection.generated.h"

UCLASS()
class UNREALDEMO_API UCavaConnection : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/*CAVA DLL*/
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importDLL(FString name);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static void freeDLL(TArray<UHumanComponent*> humans);

#pragma region Method Imports
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importCreateHumanFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importDeleteHumanFunc();
#pragma region Human info
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importHumanAgeFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importHumanGenderFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importHumanWeightFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importHumanHeightFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importHumanTemperatureFunc();
#pragma endregion
#pragma region Cardiovascular system
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importCardiovascularSystemFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importDieFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importResuscitateFunc();
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static bool importArtificialComaFunc();
#pragma endregion
#pragma endregion

#pragma region Method Calls
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static UHumanComponent* createHuman(int age, int gender, float height, float weight, float temperature);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static void deleteHuman(UHumanComponent* human);
#pragma region Human info
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static int humanAge(UHumanComponent* human);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static FString humanGender(UHumanComponent* human);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static float humanHeight(UHumanComponent* human);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static float humanWeight(UHumanComponent* human);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static float humanTemperature(UHumanComponent* human);
#pragma endregion
#pragma region Cardiovascular system
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static void cardiovascularSystem(UHumanComponent* human, float time, float oxygen);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static void die(UHumanComponent* human);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static void resuscitate(UHumanComponent* human);
	UFUNCTION(BlueprintCallable, Category = "CavaLibrary")
	static void artificialComa(UHumanComponent* human);
#pragma endregion
#pragma endregion

};
