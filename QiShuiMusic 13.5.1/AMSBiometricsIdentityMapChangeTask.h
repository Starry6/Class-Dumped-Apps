@interface AMSBiometricsIdentityMapChangeTask : AMSTask
@property (nonatomic) ACAccount account;
@property (nonatomic) AMSURLSession session;
@property (nonatomic) NSURLSessionTask task;
- (id)account;
- (void)setSession:;
- (void)setAccount:;
- (id)task;
- (void)setTask:;
- (id)session;
- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:session:task:;
@end
