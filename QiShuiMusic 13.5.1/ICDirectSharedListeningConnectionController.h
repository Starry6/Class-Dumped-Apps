@interface ICDirectSharedListeningConnectionController : ICSharedListeningConnectionController
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) q state;
@property (nonatomic) MSVQRConnection connection;
@property (nonatomic) ICLiveLinkQRConnectionDataSource dataSource;
@property (nonatomic) ICSharedListeningConnectionReport report;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) MSVTaskAssertion assertion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)assertion;
- (void)setAssertion:;
- (void)dealloc;
- (void)sendMessage:;
- (void)setState:;
- (void)connection:didReceiveMessage:;
- (void)start;
- (void)setReport:;
- (void)stop;
- (id)delegateQueue;
- (id)lock;
- (id)dataSource;
- (long long)state;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setDelegateQueue:;
- (id)report;
- (id)initWithSessionIdentifier:identity:bundleID:;
- (void)connectionDidStart:;
- (void)connection:didEndWithError:;
- (void)_handleQRDataSourceError:;
@end
