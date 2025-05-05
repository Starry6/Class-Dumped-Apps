@interface AMSExportMultiUserStateTask : AMSTask
@property (nonatomic) Q options;
@property (nonatomic) <AMSMultiUserServiceProtocol> multiUserService;
@property (nonatomic) NSUUID homeIdentifier;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)performTask;
- (id)homeIdentifier;
- (id)initWithHomeIdentifier:options:;
- (id)initWithHomeIdentifier:options:multiUserService:;
- (id)multiUserService;
@end
