@interface AAAccountManager : NSObject
- (id)accounts;
- (void)removeAccount:;
- (void)reloadAccounts;
- (void)addAccount:;
- (id)accountWithPersonID:;
- (void)dealloc;
- (void)saveAllAccounts;
- (id)primaryAccount;
- (id)_accountStore;
- (id)accountWithIdentifier:;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)updateAccount:;
- (void).cxx_destruct;
- (id)accountsEnabledForDataclass:;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)accountWithUsername:;
+ (id)sharedManager;
@end
