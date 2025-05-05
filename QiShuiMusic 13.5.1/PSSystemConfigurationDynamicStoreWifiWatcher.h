@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject
- (id)init;
- (void)dealloc;
- (void)findKeysAirPortState:andTetheringState:;
- (id)_wifiTetheringWithState:;
- (id)_wifiPowerWithState:;
- (id)_wifiNameWithState:;
- (id)wifiConfig;
+ (id)sharedInstance;
+ (BOOL)wifiEnabled;
@end
