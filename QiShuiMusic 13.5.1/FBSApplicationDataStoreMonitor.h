@interface FBSApplicationDataStoreMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (id)initWithClient:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applicationDataStoreRepositoryClient:application:changedObject:forKey:;
- (void)applicationDataStoreRepositoryClient:storeInvalidatedForApplication:;
- (BOOL)_hasObserver:;
@end
