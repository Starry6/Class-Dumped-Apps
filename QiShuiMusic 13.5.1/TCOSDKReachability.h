@interface TCOSDKReachability : NSObject
@property (nonatomic) NSString key;
- (BOOL)isConnectionOnDemand;
- (BOOL)isConnectionRequired;
- (BOOL)isInterventionRequired;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (void)dealloc;
- (unsigned int)reachabilityFlags;
- (id)key;
- (BOOL)connectionRequired;
- (void)stopNotifier;
- (void)setKey:;
- (unsigned int)currentReachabilityStatus;
- (BOOL)isReachable;
- (unsigned int)networkStatusForFlags:;
- (BOOL)isEqual:;
- (BOOL)startNotifier;
- (id)initWithReachabilityRef:;
+ (id)makeAddressKey:;
+ (BOOL)accessInstanceVariablesDirectly;
+ (unsigned int)networkStatus;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:;
@end
