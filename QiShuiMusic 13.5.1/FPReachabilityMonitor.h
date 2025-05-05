@interface FPReachabilityMonitor : NSObject
@property (nonatomic) I reachabilityFlags;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (unsigned int)reachabilityFlags;
- (void).cxx_destruct;
- (void)setReachabilityFlags:;
- (void)invalidate;
- (void)_accountDidChange;
- (BOOL)_isCellularAllowedForBR;
- (BOOL)isNetworkReachableForBundle:;
+ (BOOL)isNetworkReachableForFlags:;
+ (id)sharedReachabilityMonitor;
+ (id)_notifAccountStore;
@end
