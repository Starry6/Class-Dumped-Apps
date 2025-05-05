@interface PSSystemPolicyManager : NSObject
+ (BOOL)hasAnyAppClip;
+ (BOOL)_shouldIncludeProxy:;
+ (void)_populateBBSectionIDs;
+ (id)_dataUsageWorkspaceInfo;
+ (BOOL)_defaultAppSettingsNeededForBundleID:;
+ (BOOL)_familyControlsSettingNeededForBundleID:;
+ (BOOL)_tapToPaySettingsNeededForBundleID:;
+ (id)_thirdPartyApplicationProxyForBundleID:;
+ (BOOL)_liveActivitiesSettingsNeededForBundleID:;
+ (id)thirdPartyApplicationsIncludingAppClips:;
+ (id)thirdPartyApplicationProxies;
+ (id)specifiersForThirdPartyApps:;
+ (BOOL)_notificationSettingsNeededForBundleID:;
+ (id)thirdPartyApplicationForBundleID:;
+ (id)_thirdPartyApplicationProxies;
+ (BOOL)_languageSettingNeededForBundleID:;
+ (BOOL)_cellularDataSettingsNeededForBundleID:;
+ (BOOL)_systemSettingsNeededForProxy:;
+ (id)thirdPartyApplications;
+ (BOOL)_backgroundAppRefreshSettingsNeededForProxy:;
+ (BOOL)_documentSettingsNeededForBundleID:;
+ (BOOL)_privacySettingsNeededForProxy:;
+ (id)thirdPartyApplicationProxyForBundleID:;
+ (BOOL)_pasteboardSettingsNeededForBundleID:;
@end
