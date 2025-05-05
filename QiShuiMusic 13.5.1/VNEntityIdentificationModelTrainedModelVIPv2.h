@interface VNEntityIdentificationModelTrainedModelVIPv2 : VNEntityIdentificationModelTrainedModel
- (unsigned long long)entityCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)uniqueIdentifierOfEntityAtIndex:;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:;
- (id)entityPrintOriginatingRequestSpecifier;
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:error:;
- (id)predictionsForObservation:limit:canceller:error:;
- (id)entityUniqueIdentifiers;
- (unsigned long long)printCountForEntityWithUniqueIdentifier:;
- (id)printCountsForEntitiesWithUniqueIdentifiers:;
- (id)printCountsForAllEntities;
- (id)initWithFaceIDModel:entityPrintOriginatingRequestSpecifier:maximumElementsPerID:entityUniqueIdentifiers:entityPrintCounts:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)getStoredRepresentationTag:forModelVersion:error:;
+ (id)trainedModelBuiltFromConfiguration:dataProvider:canceller:error:;
@end
