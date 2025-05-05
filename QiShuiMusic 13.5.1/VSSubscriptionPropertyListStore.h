@interface VSSubscriptionPropertyListStore : NSAtomicStore
- (BOOL)load:;
- (id)initWithPersistentStoreCoordinator:configurationName:URL:options:;
- (BOOL)save:;
- (id)type;
- (id)newCacheNodeForManagedObject:;
- (void)updateCacheNode:fromManagedObject:;
- (id)newReferenceObjectForManagedObject:;
+ (BOOL)setMetadata:forPersistentStoreWithURL:error:;
+ (id)metadataForPersistentStoreWithURL:error:;
@end
