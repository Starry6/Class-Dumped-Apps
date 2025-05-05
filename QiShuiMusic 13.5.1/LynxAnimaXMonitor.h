@interface LynxAnimaXMonitor : NSObject
- (void)reportErrorWithCategory:metric:;
- (void)reportErrorEvent:params:;
- (void)reportErrorWithCategory:;
- (void)reportErrorWithMetric:;
- (void)reportPerformanceWithCategory:metric:;
- (void)reportWithEventName:category:metric:;
+ (id)sharedInstance;
@end
