@interface BDLExceptionReporter : NSObject
+ (id)backtraceWithMessage:bySkippedDepth:;
+ (void)reportException:;
+ (id)shareInstance;
@end
