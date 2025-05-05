@interface LNConnectionOperation : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) LNWatchdogTimer requestTimer;
@property (nonatomic) double timeout;
@property (nonatomic) LNConnection<LNConnectionOperationDelegate> connection;
@property (nonatomic) q priority;
@property (nonatomic) NSObject<OS_os_activity> activity;
- (void)start;
- (id)identifier;
- (unsigned long long)hash;
- (id)activity;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)finishWithError:;
- (double)timeout;
- (id)description;
- (void)cancelTimeout;
- (long long)priority;
- (id)requestTimer;
- (id)initWithIdentifier:priority:activity:;
- (void)extendTimeout;
- (void)setRequestTimer;
@end
