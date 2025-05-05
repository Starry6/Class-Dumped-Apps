@interface ABUAPMManager : NSObject
+ (id)_addressRangeOfAdapterWithAddressObject:;
+ (id)_addressRangeOfCore;
+ (id)_convertHeimdallrConfigFromConfig:;
+ (id)_sdkManager;
+ (void)observeToleranceCrashNotification;
+ (void)receiveToleranceCrashNotification:;
+ (BOOL)registerAPMWithConfig:;
+ (void)setToleranceCrashAction:;
@end
