@interface AWECommonPortraitHandlerHelper : NSObject
+ (id)obtainNetQualityLevel;
+ (id)obtainIsWifi;
+ (id)obtainIsCharging;
+ (id)obtainBatteryPct;
+ (id)obtainCurrentThermalState;
+ (id)obtainSystemPowerState;
+ (id)obtainBatteryLevelLess;
+ (id)obtainThermalMitigationSwitchState;
+ (id)obtainHeadphoneState;
+ (BOOL)enableSmartServiceGetHeadphoneState;
+ (id)buildPortraitHandlerMap;
@end
