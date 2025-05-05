@interface WBSDKReachability : NSObject
- (void)dealloc;
- (BOOL)connectionRequired;
- (void)stopNotifier;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
- (BOOL)startNotifier;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
@end
