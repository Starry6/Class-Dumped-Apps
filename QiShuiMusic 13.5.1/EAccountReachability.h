@interface EAccountReachability : NSObject
- (void)dealloc;
- (BOOL)connectionRequired;
- (void)stopNotifier;
- (long long)localWiFiStatusForFlags:;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
- (BOOL)startNotifier;
+ (long long)currentWWANtype;
+ (id)WWANType;
+ (long long)accessTypeForString:;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
@end
