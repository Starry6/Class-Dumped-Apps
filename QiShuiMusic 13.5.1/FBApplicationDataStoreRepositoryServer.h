@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility
@property (nonatomic) <FBApplicationDataStoreRepository> dataStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataStore:;
- (id)dataStore;
- (void)noteClientDidConnect:withMessage:;
- (id)_prerequisiteMilestones;
- (void).cxx_destruct;
- (void)noteDidReceiveMessage:withType:fromClient:;
- (id)_init;
- (void)noteClientDidDisconnect:;
- (BOOL)shouldAllowClientConnection:withMessage:;
- (void)applicationDataStoreRepositoryClientContext:valueChangedForObject:key:bundleID:;
- (void)applicationDataStoreRepositoryClientContext:repositoryInvalidatedForBundleID:;
- (void)_handleSetPrefetchedKeys:context:;
- (void)_handleSetChangesInterest:context:;
- (void)_handleSynchronize:;
- (void)_handleGetAvailableDataStores:;
- (void)_handleGetObjectForKey:;
- (void)_handleSetObjectForKey:context:;
- (void)_handleRemoveObjectForKey:context:;
- (void)_handleRemoveAllObjects:;
+ (id)sharedInstance;
@end
