@interface VNReadOnlyEntityIdentificationModel : VNEntityIdentificationModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:;
- (id)entityIdentificationModel:uniqueIdentifierOfEntityAtIndex:;
- (unsigned long long)entityIdentificationModel:indexOfEntityWithUniqueIdentifier:;
- (unsigned long long)entityIdentificationModel:numberOfObservationsForEntityAtIndex:;
- (id)entityIdentificationModel:observationAtIndex:forEntityAtIndex:;
- (id)trainedModelWithCanceller:error:;
- (BOOL)dropTrainedModelAndReturnError:;
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:;
- (id)observationsForEntityWithUniqueIdentifier:error:;
- (id)observationCountsForEntitiesWithUniqueIdentifiers:;
- (id)observationCountsForAllEntities;
- (id)initWithConfiguration:trainedModel:;
+ (BOOL)isReadOnly;
+ (id)newModelForVersion:modelObjects:error:;
@end
