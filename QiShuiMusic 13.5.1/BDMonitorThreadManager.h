@interface BDMonitorThreadManager : NSObject
+ (void)dispatchForceAsyncOnMainThread:;
+ (BOOL)isMonitorThread;
+ (void)dispatchAsyncHandlerForceOnMainThread:;
+ (void)dispatchAsyncHandlerForceOnMonitorThread:;
+ (void)dispatchSyncHandlerForceOnMainThread:;
@end
