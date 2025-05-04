@interface AWECloudCommandNetDiagnoseTraceRoute : NSObject
@property (nonatomic) q maxTTL;
@property (nonatomic) q port;
@property (nonatomic) q timeout;
@property (nonatomic) q maxAttempts;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) <AWECloudCommandNetDiagnoseTraceRouteDelegate> delegate;
- (void)_traceRouteCallbackWithLog:;
- (void)_didFinishTraceRoute;
- (long long)maxTTL;
- (id)initWithMaxTTL:timeout:maxAttempts:port:;
- (BOOL)doTraceRoute:;
- (BOOL)isTracingRoute;
- (void)setMaxTTL:;
- (void)setPort:;
- (long long)port;
- (void)setIsRunning:;
- (id)delegate;
- (long long)timeout;
- (void)setTimeout:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)isRunning;
- (void)setMaxAttempts:;
- (long long)maxAttempts;
- (void)stopTrace;
@end
