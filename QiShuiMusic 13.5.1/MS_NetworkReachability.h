@interface MS_NetworkReachability : NSObject
- (void)ms_stopNotifier;
- (BOOL)ms_connectionRequired;
- (unsigned long long)ms_currentReachabilityStatus;
- (BOOL)ms_startNotifier;
- (void)dealloc;
- (unsigned long long)networkStatusForFlags:;
+ (id)ms_currentReachabilityString;
+ (id)ms_reachabilityForInternetConnection;
+ (id)ms_reachabilityWithAddress:;
+ (id)ms_reachabilityWithHostName:;
@end
