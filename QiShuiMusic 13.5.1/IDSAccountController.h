@interface IDSAccountController : NSObject
@property (nonatomic) NSSet accounts;
- (id)accounts;
- (id)initWithService:;
- (id)_internal;
- (void)removeAccount:;
- (void)enableAccount:;
- (void)addAccount:;
- (void)disableAccount:;
- (void)dealloc;
- (void)setupAccountWithLoginID:password:completionHandler:;
- (void)removeDelegate:;
- (void)_enableAccount:;
- (id)_initWithService:onIDSQueue:;
- (id)serviceName;
- (void)_disableAccount:;
- (id)accountWithLoginID:service:;
- (void)setupAccountWithSetupParameters:aliases:completionHandler:;
- (void)_removeAccount:;
- (void)setupAccountWithLoginID:aliases:password:completionHandler:;
- (id)_initWithService:;
- (void)addDelegate:queue:;
- (void).cxx_destruct;
- (id)enabledAccounts;
- (id)accountWithUniqueID:;
@end
