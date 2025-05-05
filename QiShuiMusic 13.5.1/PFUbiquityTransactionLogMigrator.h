@interface PFUbiquityTransactionLogMigrator : NSObject
- (void)dealloc;
- (id)initWithSourceModel:destinationModel:mappingModel:localPeerID:;
- (void)populateMappingsByEntityName;
- (id)createDestinationObjectContentFromSourceObjectContent:withEntityMapping:migrationContext:;
- (id)createDestinationObjectsFromSourceObjects:migrationContext:;
@end
