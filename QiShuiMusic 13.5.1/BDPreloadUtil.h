@interface BDPreloadUtil : NSObject
+ (BOOL)isWifiConnected;
+ (id)preloadTaskQueue;
+ (void)taskAsyncInPreloadQueue:;
@end
