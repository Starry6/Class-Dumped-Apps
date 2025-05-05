@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem
- (void)dealloc;
- (id)description;
- (id)initWithOptions:request:;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:completion:;
- (id)createMirroringResultForRequest:storeIdentifier:success:madeChanges:error:;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
@end
