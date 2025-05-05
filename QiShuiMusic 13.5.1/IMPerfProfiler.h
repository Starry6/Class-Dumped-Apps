@interface IMPerfProfiler : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)addSink:withBehavior:;
- (void)logMeasurement:;
+ (id)instance;
@end
