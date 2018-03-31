#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasicShooter.generated.h"

UCLASS()
class TARGETPRACTICE_API ABasicShooter : public APawn
{
	GENERATED_BODY()

public:
    // data field
    // create a mesh component
    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* myMesh;
    
    //sets up the camera
    UPROPERTY(EditAnywhere)
    class UCameraComponent* myCamera;
	// Sets default values for this pawn's properties
	ABasicShooter();
    

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    void MoveForward(float);
    void MoveRight(float);

};