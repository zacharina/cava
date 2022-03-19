#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HumanComponent.generated.h"

UCLASS(Blueprintable, BlueprintType)
class UNREALDEMO_API UHumanComponent : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = Destroy)
	void DeleteHuman();

	void InitHuman(int* human);

	int* human_ptr = nullptr;
		
};
