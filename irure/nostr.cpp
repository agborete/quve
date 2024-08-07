class AMyActor : public AActor {
protected:
    virtual void ExternalCancel() override {
        Super::ExternalCancel();  // Call the superclass method
        UE_LOG(LogTemp, Warning, TEXT("AMyActor::ExternalCancel called"));
    }
};
