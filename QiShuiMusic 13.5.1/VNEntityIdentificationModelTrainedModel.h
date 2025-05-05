@interface VNEntityIdentificationModelTrainedModel : NSObject
- (unsigned long long)entityCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)uniqueIdentifierOfEntityAtIndex:;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:;
- (id)entityPrintOriginatingRequestSpecifier;
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:error:;
- (id)predictionsForObservation:limit:canceller:error:;
- (id)entityUniqueIdentifiers;
- (unsigned long long)printCountForEntityWithUniqueIdentifier:;
- (id)printCountsForEntitiesWithUniqueIdentifiers:;
- (id)printCountsForAllEntities;
+ (BOOL)supportsSecureCoding;
+ (BOOL)getStoredRepresentationTag:forModelVersion:error:;
+ (id)trainedModelBuiltFromConfiguration:dataProvider:canceller:error:;
@end
