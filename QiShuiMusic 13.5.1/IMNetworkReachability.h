@interface IMNetworkReachability : NSObject
- (void)dealloc;
- (long long)localWiFiStatusForFlags:;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
@end
