@interface AWEPOIParamsVerifyExceptionTracker : NSObject
+ (void)trackWithEvent:params:exceptionType:exceptionMessage:owner:skippedDepth:extraCustomParams:inDebugEnv:;
@end
