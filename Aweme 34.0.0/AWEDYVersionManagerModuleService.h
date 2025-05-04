@interface AWEDYVersionManagerModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)checkAppNewVersion;
+ (BOOL)canAccessOuterTest;
+ (void)jumpToOuterTest;
+ (BOOL)shouldShowOuterTestYellowDot;
+ (void)clearCurrentRemind;
+ (BOOL)isFirstLaunchAfterUpdating;
+ (BOOL)isNewVersionAlertShowing;
+ (BOOL)isChannelTF;
+ (unsigned long long)coldLaunchTimes;
+ (double)appInstallTimestamp;
+ (BOOL)isChannelTest;
+ (BOOL)isChannelPP;
+ (BOOL)isChannelTestFlightOrAppStore;
@end
