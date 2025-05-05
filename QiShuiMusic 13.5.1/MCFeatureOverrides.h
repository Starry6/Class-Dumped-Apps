@interface MCFeatureOverrides : NSObject
+ (BOOL)isDevFused;
+ (int)profileEventsExpirationInterval;
+ (BOOL)shouldDisablePlatformPayloadFilter;
+ (BOOL)allowVPNInUserEnrollment;
+ (double)accountRemovalTimeoutWithDefaultValue:;
+ (BOOL)boolForDefaultsKey:isPresent:;
+ (BOOL)boolForDefaultsKey:;
+ (BOOL)isAppleInternal;
+ (id)_numberForDefaultsKey:isPresent:;
+ (unsigned long long)profileEventsMaxLength;
+ (BOOL)shouldSimulatorSupportMDM;
@end
