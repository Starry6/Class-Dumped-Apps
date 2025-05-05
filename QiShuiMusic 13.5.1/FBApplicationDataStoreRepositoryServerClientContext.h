@interface FBApplicationDataStoreRepositoryServerClientContext : NSObject
@property (nonatomic) <FBApplicationDataStoreRepositoryServerClientContextDelegate> delegate;
@property (nonatomic) BOOL interestedInAllChanges;
@property (nonatomic) NSSet prefetchedKeys;
@property (nonatomic) <FBSServiceFacilityClientHandle> clientHandle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (void)_repositoryInvalidated:;
- (id)initWithDataStore:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPrefetchedKeys:;
- (id)prefetchedKeys;
- (void)_valueChanged:;
- (id)clientHandle;
- (void)setClientHandle:;
- (void)setInterestedInAllChanges:;
- (void)_queue_updateObservers;
- (BOOL)interestedInAllChanges;
@end
