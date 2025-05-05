@interface BRReachabilityMonitor : NSObject
@property (nonatomic) I reachabilityFlags;
@property (nonatomic) BOOL isNetworkReachable;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (unsigned int)reachabilityFlags;
- (void).cxx_destruct;
- (void)setReachabilityFlags:;
- (BOOL)isNetworkReachable;
- (void)invalidate;
+ (BOOL)isNetworkReachableForFlags:;
+ (unsigned int)getReachabilityFlagsByCheckingNetwork;
+ (id)sharedReachabilityMonitor;
@end
