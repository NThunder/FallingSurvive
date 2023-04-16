#include "Wreckage.h"

// Устанавливает значения по умолчанию
AWreckage::AWreckage()
{
	// Настройте этот объект actor на вызов Tick() для каждого кадра. Вы можете отключить эту функцию, чтобы повысить производительность, если она вам не нужна.
	PrimaryActorTick.bCanEverTick = true;
}

// Вызывается при запуске игры или при возрождении
void AWreckage::BeginPlay()
{
	Super::BeginPlay();
}

// Вызывается каждый кадр
void AWreckage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
