@interface PSAccountEnumerator : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> _accountUpdateQueue;
@property (nonatomic) ACMonitoredAccountStore _monitoredAccountStore;
@property (nonatomic) q visibleAccountCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accountWasAdded:;
- (id)init;
- (void)dealloc;
- (void)_handleAccountStoreDidUpdateIsInitialLoad:completion:;
- (void)_reloadAccountStoreStateIsInitialLoad:completion:;
- (void)set_monitoredAccountStore:;
- (long long)visibleAccountCount;
- (id)_accountUpdateQueue;
- (id)_monitoredAccountStore;
- (void)accountWasModified:;
- (void)accountWasRemoved:;
- (void)set_accountUpdateQueue:;
- (void).cxx_destruct;
- (void)setVisibleAccountCount:;
+ (id)_visibleAccountTypeIDs;
+ (id)sharedEnumerator;
@end
