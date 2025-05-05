@interface PLModelingUtilities : NSObject
+ (BOOL)internalBuild;
+ (BOOL)isMac;
+ (BOOL)isiPad;
+ (BOOL)isiPhone;
+ (BOOL)isHomePod;
+ (BOOL)isWatch;
+ (BOOL)isiPod;
+ (BOOL)isARMMac;
+ (BOOL)isAppleTV;
+ (BOOL)carrierBuild;
+ (BOOL)hasAOD;
+ (BOOL)isTVOS;
+ (double)duetDiscretionaryBudget;
+ (id)valueForMobileGestaltCapability:;
+ (BOOL)shouldShowBatteryGraphs;
+ (double)defaultBatteryEnergyCapacity;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)networkingEnergyWithBytes:withDuration:;
+ (BOOL)isPercentageSupported;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isHeySiriAlwaysOn;
@end
