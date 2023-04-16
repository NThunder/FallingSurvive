#include "Staff.h"

// Устанавливает значения по умолчанию
AStaff::AStaff()
{
	// Настройте этот объект actor на вызов Tick() для каждого кадра. Вы можете отключить эту функцию, чтобы повысить производительность, если она вам не нужна.
	PrimaryActorTick.bCanEverTick = true;
}

// Вызывается при запуске игры или при возрождении
void AStaff::BeginPlay()
{
	Super::BeginPlay();
}

// Вызывается каждый кадр
void AStaff::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
