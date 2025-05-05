@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem
- (void)dealloc;
- (BOOL)updateMetadataForAccumulatedChangesInContext:inStore:error:;
- (id)description;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:completion:;
- (BOOL)commitMetadataChangesWithContext:forStore:error:;
- (void)addUpdatedRecord:;
- (BOOL)applyAccumulatedChangesToStore:inManagedObjectContext:withStoreMonitor:madeChanges:error:;
- (id)initForRecordType:withOptions:request:;
@end
