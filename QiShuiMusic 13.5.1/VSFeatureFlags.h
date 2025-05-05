@interface VSFeatureFlags : NSObject
+ (BOOL)isTrialEnabled;
+ (BOOL)isLowPowerDeviceNeuralEnabled;
+ (BOOL)useSiriTTSService;
+ (BOOL)lowInactiveMemory;
@end
