@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImportRecordsWorkItem
- (void)dealloc;
- (id)initWithChangedRecordZoneIDs:options:request:;
- (BOOL)updateMetadataForAccumulatedChangesInContext:inStore:error:;
- (id)description;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:completion:;
- (BOOL)commitMetadataChangesWithContext:forStore:error:;
@end
