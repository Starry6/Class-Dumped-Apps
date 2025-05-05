@interface NSAtomicStore : NSPersistentStore
- (void)managedObjectContextDidUnregisterObjectsWithIDs:;
- (void)_preflightCrossCheck;
- (id)newValuesForObjectWithID:withContext:error:;
- (BOOL)load:;
- (id)_rawMetadata__;
- (void)_didLoadMetadata;
- (id)executeRequest:withContext:error:;
- (id)init;
- (void)managedObjectContextDidRegisterObjectsWithIDs:;
- (id)newValueForRelationship:forObjectWithID:withContext:error:;
- (id)obtainPermanentIDsForObjects:error:;
- (id)initWithPersistentStoreCoordinator:configurationName:URL:options:;
- (void)dealloc;
- (id)metadata;
- (id)cacheNodeForObjectID:;
- (BOOL)save:;
- (void)willRemoveCacheNodes:;
- (void)setMetadata:;
- (void)addCacheNodes:;
- (id)newCacheNodeForManagedObject:;
- (id)referenceObjectForObjectID:;
- (void)updateCacheNode:fromManagedObject:;
- (id)newReferenceObjectForManagedObject:;
- (id)cacheNodes;
- (id)objectIDForEntity:referenceObject:;
+ (id)metadataForPersistentStoreWithURL:error:;
@end
