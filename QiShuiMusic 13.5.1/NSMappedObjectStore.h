@interface NSMappedObjectStore : NSPersistentStore
- (void)managedObjectContextDidUnregisterObjectsWithIDs:;
- (id)newValuesForObjectWithID:withContext:error:;
- (id)_rawMetadata__;
- (id)executeRequest:withContext:error:;
- (id)init;
- (void)managedObjectContextDidRegisterObjectsWithIDs:;
- (void)saveDocumentToPath:;
- (id)newValueForRelationship:forObjectWithID:withContext:error:;
- (id)obtainPermanentIDsForObjects:error:;
- (id)initWithPersistentStoreCoordinator:configurationName:URL:options:;
- (void)dealloc;
- (id)metadata;
- (id)identifier;
- (void)setMetadata:;
+ (BOOL)setMetadata:forPersistentStoreWithURL:options:error:;
+ (id)metadataForPersistentStoreWithURL:options:error:;
@end
