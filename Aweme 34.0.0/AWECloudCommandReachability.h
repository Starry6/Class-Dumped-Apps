@interface AWECloudCommandReachability : NSObject
- (void)dealloc;
- (long long)networkStatusForFlags:;
- (void)stopNotifier;
- (BOOL)startNotifier;
- (BOOL)connectionRequired;
- (long long)currentReachabilityStatus;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
+ (id)reachabilityWithAddress:;
@end
