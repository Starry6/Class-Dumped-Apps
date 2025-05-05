@interface BSBlockSentinel : NSObject
- (BOOL)signal;
- (BOOL)signalWithContext:;
- (void).cxx_destruct;
+ (id)sentinelWithExceptionReason:;
+ (id)sentinelWithQueue:signalCount:signalHandler:;
+ (id)sentinelWithSignalCount:exceptionReason:;
+ (id)sentinelWithQueue:signalCount:completion:;
+ (id)sentinelWithQueue:completion:;
+ (id)sentinelWithQueue:signalHandler:;
@end
