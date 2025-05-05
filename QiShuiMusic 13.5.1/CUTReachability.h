@interface CUTReachability : NSObject
- (void)dealloc;
- (BOOL)connectionRequired;
- (long long)localWiFiStatusForFlags:;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
@end
