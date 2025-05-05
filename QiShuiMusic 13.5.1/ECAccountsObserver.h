@interface ECAccountsObserver : NSObject
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAccountStore:;
- (void)setAccountStore:;
- (id)accountStore;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:;
- (void)_credentialsDidChange:;
- (void)_mailAccountsChanged:;
- (BOOL)_shouldNotifyOnAccountChangeForNotification:;
- (void)handleAccountStoreChangeForAccountIdentifier:;
- (void)handleCredentialChangeForAccountIdentifier:;
- (void)handleMailAccountsHaveChanged:accountsNeedInitialization:;
+ (id)log;
+ (id)observedAccountTypes;
@end
