#include "Client.h"
#include "UpdateManager.h"

FString UpdateManager::HelloWorld() {
	UE_LOG(LogTemp, Log, TEXT("Hello, World"));
	return FString("Hello, I'm Happy!");
}
