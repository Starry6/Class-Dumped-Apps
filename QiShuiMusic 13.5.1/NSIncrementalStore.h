@interface NSIncrementalStore : NSPersistentStore
- (void)managedObjectContextDidUnregisterObjectsWithIDs:;
- (void)_preflightCrossCheck;
- (BOOL)_prepareForExecuteRequest:withContext:error:;
- (id)newValuesForObjectWithID:withContext:error:;
- (BOOL)load:;
- (id)_rawMetadata__;
- (id)executeRequest:withContext:error:;
- (BOOL)loadMetadata:;
- (void)managedObjectContextDidRegisterObjectsWithIDs:;
- (id)newValueForRelationship:forObjectWithID:withContext:error:;
- (id)obtainPermanentIDsForObjects:error:;
- (void)dealloc;
- (id)newObjectIDForEntity:referenceObject:;
- (void)_setMetadata:includeVersioning:;
- (id)metadata;
- (void)setMetadata:;
- (id)referenceObjectForObjectID:;
- (id)_newObjectIDForEntityDescription:pk:;
+ (BOOL)setMetadata:forPersistentStoreWithURL:error:;
+ (id)metadataForPersistentStoreWithURL:error:;
+ (id)identifierForNewStoreAtURL:;
@end
