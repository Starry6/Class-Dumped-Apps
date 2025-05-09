@interface ICEnvironmentMonitor : NSObject
@property (nonatomic) BOOL charging;
@property (nonatomic) q networkType;
@property (nonatomic) q lastKnownNetworkType;
@property (nonatomic) NSDictionary signalStrength;
@property (nonatomic) NSDictionary signalInfo;
@property (nonatomic) BOOL remoteServerReachable;
@property (nonatomic) BOOL remoteServerLikelyReachable;
@property (nonatomic) Q currentNetworkLinkQuality;
@property (nonatomic) BOOL currentNetworkLinkHighQuality;
@property (nonatomic) BOOL currentNetworkLinkExpensive;
@property (nonatomic) BOOL wifiAssociated;
@property (nonatomic) BOOL ethernetWired;
@property (nonatomic) BOOL wiFiActive;
@property (nonatomic) BOOL networkConstrained;
@property (nonatomic) Q currentThermalLevel;
@property (nonatomic) double currentBatteryLevel;
@property (nonatomic) NSString telephonyOperatorName;
@property (nonatomic) NSString telephonyRegistrationStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isWifiActive;
- (long long)networkType;
- (void)displayStatusChanged:status:;
- (id)signalStrength;
- (void)currentDataSimChanged:;
- (BOOL)isCharging;
- (void)removeObserver:;
- (unsigned long long)currentThermalLevel;
- (void)_onQueue_loadInitialThermalLevel;
- (id)init;
- (void)addObserver:;
- (void)didStopTrackingAllNOIs:;
- (BOOL)isEthernetWired;
- (void)dealloc;
- (void)operatorNameChanged:name:;
- (id)signalInfo;
- (BOOL)isRemoteServerReachable;
- (void)connectionStateChanged:connection:dataConnectionStatusInfo:;
- (void)_handleApplicationDidEnterForegroundNotification:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (BOOL)isCurrentNetworkLinkHighQuality;
- (long long)_onQueue_currentNetworkType;
- (BOOL)_onQueue_isWiFiAssociated;
- (BOOL)_onQueue_networkConstrained;
- (long long)_onQueue_currentCellularLinkQuality;
- (BOOL)isCurrentNetworkLinkExpensive;
- (id)telephonyOperatorName;
- (unsigned long long)currentNetworkLinkQuality;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:;
- (void)didStopTrackingNOI:;
- (void)cellMonitorUpdate:info:;
- (BOOL)isNetworkConstrained;
- (double)currentBatteryLevel;
- (BOOL)isWiFiAssociated;
- (void)_onQueue_updateThermalLevelWithToken:;
- (void)_onQueue_updatePowerStateNotifyingObservers:;
- (long long)_networkTypeFromWatchCarousel;
- (void)_notifyObserversEnvironmentMonitorDidChangeTelephonyStatus;
- (id)telephonyRegistrationStatus;
- (void).cxx_destruct;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:;
- (long long)lastKnownNetworkType;
- (BOOL)isWiFiActive;
- (void)unregisterObserver:;
- (void)didStartTrackingNOI:;
- (void)registerObserver:;
- (BOOL)isRemoteServerLikelyReachable;
+ (id)sharedMonitor;
@end
