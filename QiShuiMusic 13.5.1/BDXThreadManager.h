@interface BDXThreadManager : NSObject
+ (void)checkMonitorQueue;
+ (void)dispatchAsyncHandlerForceOnBDXThread:;
@end
