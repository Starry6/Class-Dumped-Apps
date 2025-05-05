@interface HSWiFiManager : NSObject
@property (nonatomic) BOOL wiFiEnabled;
@property (nonatomic) BOOL wiFiAssociated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)_wifiCallBack:;
- (void)setWiFiEnabled:;
- (BOOL)isWiFiAssociated;
- (void).cxx_destruct;
- (id)_processIdentifier;
- (void)setWiFiAssociated:;
- (void)environmentMonitorDidChangeNetworkReachability:;
- (BOOL)_getWiFiAssociated;
- (BOOL)isWiFiEnabled;
- (BOOL)_getWiFiEnabledFromPrefs;
+ (id)sharedWiFiManager;
@end
