@interface AFUtilities : NSObject
+ (BOOL)isInternalBuild;
+ (id)bundleVersion;
+ (id)bundleIdentifier;
+ (void)openApplicationWithBundleID:;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (id)urlForBundleIdentifier:;
+ (void)launchSoftwareUpdate;
+ (void)launchPhotosApplication;
+ (void)openEnergySaverPref;
+ (void)openSharingPref;
+ (void)openSecurityPref;
+ (void)openInternetAccountPref;
+ (void)openNetworkPref;
+ (void)openParentalControlPref;
+ (void)openUsersAndGroupsPref;
+ (void)openAppleIDPref;
+ (BOOL)openAppleIDPrefWithLaunchParameters:;
+ (BOOL)screenLockIsEnabled;
@end
