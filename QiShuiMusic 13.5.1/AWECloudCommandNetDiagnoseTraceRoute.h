@interface AWECloudCommandNetDiagnoseTraceRoute : NSObject
@property (nonatomic) q maxTTL;
@property (nonatomic) q port;
@property (nonatomic) q timeout;
@property (nonatomic) q maxAttempts;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) <AWECloudCommandNetDiagnoseTraceRouteDelegate> delegate;
- (void)_didFinishTraceRoute;
- (void)_traceRouteCallbackWithLog:;
- (BOOL)doTraceRoute:;
- (id)initWithMaxTTL:timeout:maxAttempts:port:;
- (BOOL)isTracingRoute;
- (long long)maxTTL;
- (void)setMaxTTL:;
- (void)setDelegate:;
- (void)setTimeout:;
- (long long)port;
- (void)setPort:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)delegate;
- (void).cxx_destruct;
- (long long)timeout;
- (long long)maxAttempts;
- (void)setMaxAttempts:;
- (void)stopTrace;
@end
