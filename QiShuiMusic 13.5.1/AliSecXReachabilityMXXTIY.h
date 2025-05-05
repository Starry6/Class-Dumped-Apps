@interface AliSecXReachabilityMXXTIY : NSObject
- (void)dealloc;
- (void)stopNotifier;
- (long long)localWiFiStatusForFlags:;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:;
- (BOOL)startNotifier;
+ (id)reachabilityWithHostName:;
@end
