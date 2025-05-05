@interface CNContainerCache : NSObject
@property (nonatomic) CNContainer primaryiCloudContainer;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) CNCache cachedAccounts;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
- (void)setContactStore:;
- (void)setAccountStore:;
- (id)accountStore;
- (void)dealloc;
- (void)setWorkQueue:;
- (id)workQueue;
- (void)contactStoreDidChange;
- (id)primaryiCloudContainer;
- (void)setCachedAccounts:;
- (id)cachedAccounts;
- (void).cxx_destruct;
- (id)contactStore;
- (id)accountForContainer:;
- (id)initWithContactStore:;
- (void)accountStoreDidChange;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (id)cnAccountForContainer:;
- (void)resetAccountCache;
- (void)resetPrimaryiCloudContainer;
- (void)setPrimaryiCloudContainer:;
+ (id)os_log;
@end
