@interface CNFamilyCircleConfigurationUpdateTask : CNTask
@property (nonatomic) <CNDelegateAccountSource> accountSource;
@property (nonatomic) <CNDelegateAccountSink> accountSink;
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) NSArray delegateAccounts;
@property (nonatomic) CNResult result;
- (id)result;
- (id)run:;
- (id)init;
- (id)accountStore;
- (id)accountSource;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)description;
- (void)setResult:;
- (id)initWithAccountSource:accountSink:accountStore:;
- (void)loadDefaultSourceIfNecessary;
- (void)loadDelegateAccountsFromSource;
- (void)loadDefaultSinkIfNecessary;
- (void)updateDelegateAccounts;
- (id)accountSink;
- (id)delegateAccounts;
+ (id)os_log;
@end
