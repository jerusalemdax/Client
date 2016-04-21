#pragma once

#include "UpdateManager.generated.h"

UCLASS()
class CLIENT_API UpdateManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Test")
	static FString HelloWorld();
};
