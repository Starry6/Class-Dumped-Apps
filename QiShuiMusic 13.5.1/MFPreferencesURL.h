@interface MFPreferencesURL : NSObject
+ (id)accountURLForAccount:;
+ (id)accountInfoURLForAccount:;
+ (id)advancedAccountInfoURLForAccount:;
+ (id)addAccountURL;
+ (id)storageManagementURL;
+ (id)vipSenderListURL;
+ (id)blockedSenderURL;
+ (id)hideMyEmailURL;
+ (id)_urlForRoot:pathComponents:;
+ (id)_pathComponentsForAccount:preferenceURLType:;
+ (id)_accountInfoSettingsURLForAccount:preferenceURLType:;
@end
