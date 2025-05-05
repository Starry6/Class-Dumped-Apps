@interface DMCMultiUserModeUtilities : NSObject
+ (id)_configureQuotaSizeForSharedDeviceImmediately:;
+ (BOOL)isEphemeralMultiUser;
+ (BOOL)isSharediPad;
+ (id)configureQuotaSizeForSharedDevice:preferenceDomain:;
+ (id)onlineAuthenticationGracePeriod;
+ (unsigned long long)getDiskAvailableSize;
+ (BOOL)deviceHasMultipleUsers;
+ (double)temporarySessionTimeout;
+ (BOOL)configureMAIDDefaultDomains:;
+ (BOOL)configureTemporarySessionTimeout:;
+ (double)userSessionTimeout;
+ (BOOL)isPrimaryUserSession;
+ (BOOL)configureOnlineAuthenticationGracePeriod:;
+ (id)configureToSharedDeviceWithPreferenceDomain:;
+ (BOOL)inSharediPadUserSession;
+ (id)configureResidentUsersNumberForSharedDevice:preferenceDomain:;
+ (BOOL)configureUserSessionTimeout:;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:;
+ (BOOL)configureTemporarySessionOnly:restoreQuotaSize:preferenceDomain:;
+ (id)managedAppleIDDefaultDomains;
+ (unsigned long long)_getDiskSize;
+ (BOOL)shouldSkipLanguageAndLocaleSetupForNewUsers;
+ (BOOL)_updateMultiUserDeviceConfigurationFileWithKey:value:;
+ (unsigned long long)_previousQuotaSize;
+ (BOOL)configureShouldSkipLanguageAndLocaleSetupForNewUsers:;
+ (BOOL)temporarySessionOnly;
+ (BOOL)isFirstSetupBuddyDone;
@end
