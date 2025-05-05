@interface EMAccountRepository : EMRepository
@property (nonatomic) NSArray allAccounts;
@property (nonatomic) NSArray receivingAccounts;
@property (nonatomic) NSArray deliveryAccounts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)accountsChanged:;
- (id)initWithRemoteConnection:;
- (id)allAccounts;
- (id)accountForIdentifier:;
- (void).cxx_destruct;
- (void)accountsAdded:;
- (void)accountsRemoved:;
- (id)deliveryAccounts;
- (void)didBeginObserving;
- (void)didEndObserving;
- (void)requestAccounts;
- (void)_fetchAccountsAndObserveChanges;
- (id)_currentAccountsByObjectIDMap;
- (id)receivingAccounts;
- (id)accountForAccountIdentifier:;
- (void)_postAccountChangedNotification;
+ (id)log;
+ (id)remoteInterface;
@end
