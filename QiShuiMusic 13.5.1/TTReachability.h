@interface TTReachability : NSObject
@property (nonatomic) NSString hostName;
@property (nonatomic) NSString hostAddress;
@property (nonatomic) BOOL internetConnection;
- (long long)currentNetworkAuthorizationStatus;
- (void)invalidateCachedStatus;
- (BOOL)isInternetConnection;
- (void)setCachedStatus:;
- (BOOL)shouldUpdateCachedStatus:;
- (BOOL)shouldUpdateNetworkStatus;
- (void)dealloc;
- (id)hostAddress;
- (BOOL)connectionRequired;
- (void)stopNotifier;
- (void)applicationDidEnterBackground:;
- (BOOL)isCellular;
- (long long)currentReachabilityStatus;
- (void).cxx_destruct;
- (void)setHostAddress:;
- (long long)networkStatusForFlags:;
- (id)hostName;
- (BOOL)startNotifier;
- (void)setHostName:;
- (BOOL)isWifi;
- (id)initWithReachabilityRef:;
+ (id)IPAddressOfHostName:;
+ (id)IPAddressOfHostName:protocolType:;
+ (id)internetConnectionNotifyRunLoop;
+ (id)IPAddressOfHostName:protocolFamily:;
+ (void)radioAccessTechnologyDidChange:;
+ (id)cellularData;
+ (id)currentAvailableCellularProviders;
+ (id)currentAvailableCellularServices;
+ (int)currentCellularConnectionForDataService;
+ (int)currentCellularConnectionForService:;
+ (id)currentCellularProviderForDataService;
+ (id)currentCellularProviderForService:;
+ (long long)currentCellularProviders;
+ (id)currentConnectionMethodName;
+ (id)currentIPAddresses;
+ (id)currentPrioritizedCellularProviders;
+ (id)currentPrioritizedRadioAccessTechnologies;
+ (id)currentRadioAccessTechnologyForDataService;
+ (id)currentRadioAccessTechnologyForService:;
+ (long long)fastDetectActiveIfAddrsStatus;
+ (id)internetConnectionNotifyRunLoopMode;
+ (BOOL)is2GConnected;
+ (BOOL)is2GConnectedForService:;
+ (BOOL)is3GConnected;
+ (BOOL)is3GConnectedForService:;
+ (BOOL)is4GConnected;
+ (BOOL)is4GConnectedForService:;
+ (BOOL)is5GConnected;
+ (BOOL)is5GConnectedForService:;
+ (id)queueConfigBlock;
+ (id)reachabilityWithHostType:;
+ (void)serviceRadioAccessTechnologyDidChange:;
+ (void)setInternetConnectionNotifyRunLoop:;
+ (void)setInternetConnectionNotifyRunLoopMode:;
+ (void)setQueueConfigBlock:;
+ (void)setStatusCacheConfigBlock:;
+ (id)statusCacheConfigBlock;
+ (id)telephoneInfo;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (BOOL)isNetworkConnected;
+ (id)reachabilityWithHostName:;
@end
