
#include "BasicShooter.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"


// Sets default values
ABasicShooter::ABasicShooter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    CreateDefaultSubobject<UFloatingPawnMovement>("FloatingSub");
    myMesh = CreateDefaultSubobject<UStaticMeshComponent>("MyMesh");
    myCamera = CreateDefaultSubobject<UCameraComponent>("MyCamera");
}

// Called when the game starts or when spawned
void ABasicShooter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicShooter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveForward", this, &ABasicShooter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ABasicShooter::MoveRight);
}

void ABasicShooter::MoveForward(float val){
    AddMovementInput(GetActorForwardVector(), val);
}
void ABasicShooter::MoveRight(float val){
    AddMovementInput(GetActorRightVector(), val);
}

