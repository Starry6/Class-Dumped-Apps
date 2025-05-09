@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)removePrefetchedKeys:withCompletion:;
- (void)_updateCacheIfNecessaryWithObject:forKey:forApplication:;
- (void)removeAllObjectsForApplication:withCompletion:;
- (id)_observers;
- (id)objectForKey:forApplication:;
- (void)removeObjectForKey:forApplication:withCompletion:;
- (void)_prefetchQueue_updateNotificationListeners;
- (void)setObject:forKey:forApplication:withCompletion:;
- (id)availableDataStores;
- (void)_repositoryInvalidated:;
- (void)synchronizeWithCompletion:;
- (void)addPrefetchedKeys:;
- (id)initWithDataStore:;
- (BOOL)prefetchedObjectIfAvailableForKey:application:outObject:;
- (void)_invalidateCacheIfObjectIsNotEqual:forKey:forApplication:;
- (void)_updateNotificationListeners;
- (void).cxx_destruct;
- (void)_valueChanged:;
- (id)_prefetchQueue_prefetchedKeysForApplication:;
- (void)objectForKey:forApplication:withResult:;
- (void)invalidate;
@end
