@interface AWEIPhonePIPABSettings : NSObject
+ (BOOL)enableDeleteUpdateMethod;
+ (BOOL)enableExternalPIP;
+ (BOOL)shouldBGSmallWindowPause;
+ (BOOL)enableDecreaseUpdate;
+ (BOOL)enableMuteKeepPiP;
+ (BOOL)enableDecreaseCanAuto;
+ (BOOL)enableBackgroundUseCover;
+ (unsigned long long)backgroundPlaySmallWindowConfig;
+ (id)iPhonePIPConfig;
+ (BOOL)enableExternalPIPDefaultOn;
+ (BOOL)enableDelayUpdatePiPState;
+ (BOOL)enablePiPGuide;
@end
