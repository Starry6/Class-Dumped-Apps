@interface PFCloudKitImportRecordsWorkItem : PFCloudKitImporterWorkItem
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)updateMetadataForAccumulatedChangesInContext:inStore:error:;
- (id)description;
- (id)initWithOptions:request:;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:completion:;
- (BOOL)commitMetadataChangesWithContext:forStore:error:;
- (void)addUpdatedRecord:;
- (BOOL)applyAccumulatedChangesToStore:inManagedObjectContext:withStoreMonitor:madeChanges:error:;
- (void)doWorkForStore:inMonitor:completion:;
- (id)createMirroringResultForRequest:storeIdentifier:success:madeChanges:error:;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
- (void)cloudKitSerializer:failedToUpdateRelationship:withError:;
- (id)cloudKitSerializer:safeSaveURLForAsset:;
@end
