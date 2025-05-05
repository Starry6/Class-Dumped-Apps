@interface GEONetworkObserver : NSObject
@property (nonatomic) BOOL networkReachable;
@property (nonatomic) BOOL networkConstrained;
@property (nonatomic) BOOL cellConnection;
@property (nonatomic) BOOL wifiConnection;
- (id)init;
- (void)dealloc;
- (void)_initializeNetworkMonitor;
- (BOOL)_isConnectionType:;
- (BOOL)isNetworkConstrained;
- (void)_networkPathUpdated:;
- (void)initializeIfNecessary;
- (BOOL)isCellConnection;
- (void).cxx_destruct;
- (void)removeNetworkReachableObserver:;
- (BOOL)isNetworkReachable;
- (BOOL)isWiFiConnection;
- (void)addNetworkReachableObserver:selector:;
+ (id)sharedNetworkObserver;
@end
