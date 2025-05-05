@interface IESLiveSaaSReachability : NSObject
- (void)dealloc;
- (void)stopNotifier;
- (long long)localWiFiStatusForFlags:;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
- (BOOL)startNotifier;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
@end
