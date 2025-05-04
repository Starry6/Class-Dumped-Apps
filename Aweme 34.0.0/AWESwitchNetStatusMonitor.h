@interface AWESwitchNetStatusMonitor : NSObject
@property (nonatomic) NSString lastNetworkTypeStr;
@property (nonatomic) BOOL isWeakNet;
- (void)onMultiNetworkStateChanged:;
- (BOOL)isWeakNet;
- (BOOL)checkIsPoolNet;
- (BOOL)checkNetworkIsWifi;
- (void)setIsWeakNet:;
- (void)p_addKVO;
- (void)wifiToCellularChangedNotification:;
- (void)recordNetworkSwitch;
- (void)setLastNetworkTypeStr:;
- (id)lastNetworkTypeStr;
- (id)init;
- (void).cxx_destruct;
- (id)networkType;
@end
