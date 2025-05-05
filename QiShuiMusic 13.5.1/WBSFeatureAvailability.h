@interface WBSFeatureAvailability : NSObject
+ (BOOL)isInternalInstall;
+ (BOOL)isSearchProviderEnabled:;
+ (BOOL)isCustomizationSyncEnabled;
+ (BOOL)isPerSiteSettingSyncEnabled;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)isStartPageSettingSyncEnabled;
+ (BOOL)_shouldShowRussianFeatures;
@end
