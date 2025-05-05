@interface ICReachability : NSObject
- (void)dealloc;
- (BOOL)connectionRequired;
- (void)stopNotifier;
- (long long)localWiFiStatusForFlags:;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
- (BOOL)startNotifier;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
+ (id)sharedReachabilityForInternetConnection;
@end
