@interface BUReachability : NSObject
- (long long)currentNetworkAuthorizationStatus;
- (void)invalidateCachedStatus;
- (void)setCachedStatus:;
- (BOOL)shouldUpdateCachedStatus:;
- (void)dealloc;
- (BOOL)connectionRequired;
- (void)stopNotifier;
- (void)applicationDidEnterBackground:;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
- (BOOL)startNotifier;
- (id)initWithReachabilityRef:;
+ (long long)fastDetectActiveIfAddrsStatus;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (BOOL)isNetworkConnected;
+ (id)reachabilityWithHostName:;
@end
