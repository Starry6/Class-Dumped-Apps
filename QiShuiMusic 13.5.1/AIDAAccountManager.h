@interface AIDAAccountManager : NSObject
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) NSDictionary accounts;
@property (nonatomic) <AIDAAccountManagerDelegate> delegate;
- (id)accounts;
- (id)initWithAccountStore:;
- (void)removeAccountChangeObserver:;
- (id)init;
- (id)accountStore;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setAccounts:;
- (void)_accountStoreDidChange:;
- (id)aidaAccountForService:;
- (id)_delegate_accountsForAccountManager;
- (void)addAccountChangeObserver:handler:;
+ (id)_accountStoreChangeQueue;
@end
