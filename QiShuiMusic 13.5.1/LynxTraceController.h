@interface LynxTraceController : NSObject
- (long long)getTraceController;
- (void)onTracingComplete:;
- (void)startStartupTracingIfNeeded;
- (void)startTracing:config:;
- (void)startTracing:jsonConfig:;
- (id)init;
- (void)stopTracing;
- (void)startTrace;
- (void)stopTrace;
+ (id)sharedInstance;
@end
