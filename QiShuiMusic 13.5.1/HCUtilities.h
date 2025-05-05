@interface HCUtilities : NSObject
+ (BOOL)isProtectedDataAvailable;
+ (BOOL)isInternalInstall;
+ (long long)systemBootTime;
+ (BOOL)watchSupportsPairingHearingAids;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)deviceIsPad;
+ (BOOL)deviceIsSmallPhone;
+ (BOOL)currentProcessIsHealth;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)deviceIsBigPhone;
+ (BOOL)deviceIsPhone;
+ (id)bluetoothManagerQueue;
+ (BOOL)supportsLEA2;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)deviceIsPod;
+ (BOOL)deviceIsWatch;
+ (id)messagePayloadFromDictionary:andIdentifier:;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)deviceIsMultiUser;
+ (BOOL)deviceHasHomeButton;
@end
