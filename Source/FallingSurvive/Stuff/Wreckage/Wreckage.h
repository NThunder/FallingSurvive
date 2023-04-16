#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wreckage.generated.h"

UCLASS()
class FALLINGSURVIVE_API AWreckage : public AActor
{
	GENERATED_BODY()
	
public:
	// Устанавливает значения по умолчанию для свойств этого объекта actor
	AWreckage();

protected:
	// Вызывается при запуске игры или при возрождении
	virtual void BeginPlay() override;

public:
	// Вызывается каждый кадр
	virtual void Tick(float DeltaTime) override;
};
