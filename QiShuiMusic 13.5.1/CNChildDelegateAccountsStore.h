@interface CNChildDelegateAccountsStore : NSObject
@property (nonatomic) ACAccount parentAccount;
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)removeAccount:;
- (id)accountStore;
- (id)primaryAccount;
- (id)addChildWithDelegateInfo:;
- (id)updateAccount:;
- (void).cxx_destruct;
- (id)description;
- (id)delegateAccounts;
- (BOOL)updateAccounts:error:;
- (id)initWithParentAccount:accountStore:;
- (id)parentAccount;
+ (id)os_log;
+ (void)configureChildAccount:withSettingsFromDelegateInfo:parent:;
@end
