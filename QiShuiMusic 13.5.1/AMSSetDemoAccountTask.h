@interface AMSSetDemoAccountTask : AMSTask
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) NSString password;
@property (nonatomic) NSString username;
- (void)setPassword:;
- (void)setClientInfo:;
- (id)username;
- (id)password;
- (id)clientInfo;
- (void)setUsername:;
- (void).cxx_destruct;
- (id)initWithUsername:password:;
- (id)performTask;
@end
