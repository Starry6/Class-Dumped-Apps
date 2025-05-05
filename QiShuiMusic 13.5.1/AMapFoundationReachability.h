@interface AMapFoundationReachability : NSObject
- (id)currentConnectionFlags;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableWithFlags:;
- (void)localConnectionChanged;
- (id)init;
- (void)dealloc;
- (unsigned int)reachabilityFlags;
- (void)stopNotifier;
- (long long)currentNetworkType;
- (void).cxx_destruct;
- (BOOL)isReachable;
- (void)startNotifier;
+ (id)sharedInstance;
@end
