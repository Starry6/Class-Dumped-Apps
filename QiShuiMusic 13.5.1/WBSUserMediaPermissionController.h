@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager
@property (nonatomic) WBSPerSitePreference cameraMediaCapturePreference;
@property (nonatomic) WBSPerSitePreference microphoneMediaCapturePreference;
@property (nonatomic) WBSPerSitePreferencesSQLiteStore perSitePreferencesStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)preferenceNameForPreference:;
- (id)preferences;
- (id)_dictionaryRepresentation;
- (id)valuesForPreference:;
- (void)removePreferenceValuesForDomains:fromPreference:completionHandler:;
- (id)localizedStringForValue:inPreference:;
- (void)savePendingChangesBeforeTermination;
- (void)setValue:ofPreference:forDomain:completionHandler:;
- (void)getAllDomainsConfiguredForPreference:usingBlock:;
- (void).cxx_destruct;
- (id)_init;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:;
- (id)perSitePreferencesStore;
- (void)getValueOfPreference:forDomain:withTimeout:usingBlock:;
- (void)checkUserMediaPermissionForURL:mainFrameURL:frameIdentifier:decisionHandler:;
- (void)getPermissionForOrigin:topLevelOrigin:completionHandler:;
- (id)microphoneMediaCapturePreference;
- (void)savePendingChangesWithCompletionHandler:;
- (id)cameraMediaCapturePreference;
- (unsigned long long)permissionForNonHTTPSOriginFromPermission:;
- (void)setPermission:expirationPolicy:forOrigin:topLevelOrigin:;
- (void)reloadPreferences;
- (void)removeAllPermissionsWithCompletionHandler:;
- (id)initWithUserMediaPermissionsFileURL:perSitePreferencesStore:;
- (void)performDelayedLaunchOperations;
- (void)_invalidateCachedSettingsForOriginHash:;
- (unsigned long long)permissionForOrigin:topLevelOrigin:;
- (unsigned long long)_permissionForOrigin:topLevelOrigin:;
- (id)_validPolicyForDomainWithOrigin:topLevelOrigin:;
- (id)_validPolicyForOrigin:topLevelOrigin:;
- (id)_policyForOrigin:topLevelOrigin:;
- (void)_setPermission:expirationPolicy:forOrigin:topLevelOrigin:;
- (unsigned long long)_permissionByRemovingDefaultPermissionFlagsInPermission:;
- (id)saltForOrigin:topLevelOrigin:frameIdentifier:;
- (id)_saltForOrigin:topLevelOrigin:frameIdentifier:;
- (id)_saltWithPolicyEntry:computedPermission:frameIdentifier:;
- (void)removeAllOriginsAddedAfterDate:;
- (void)resetOriginPermissions;
- (void)resetOriginPermissionsWithCompletionHandler:;
- (void)_loadSavedPermissions;
- (void)didCommitLoadForFrameWithIdentifier:;
- (BOOL)_captureDevicesAreAllDefaultsGivenPermission:;
- (void)_cachedSettingsDidChange;
- (void)_cachedSettingsDidChangeAndWriteImmediately:completionHandler:;
- (long long)_mediaCaptureTypeForPreference:;
- (unsigned long long)_permissionMaskForMediaCaptureType:;
- (BOOL)_setValue:ofPreference:forDomain:;
- (long long)_mediaCaptureSettingForMediaCaptureType:userMediaPermission:;
- (unsigned long long)_userMediaPermissionForMediaCaptureType:mediaCaptureSetting:;
- (unsigned long long)userMediaPermissionForDefaultPreferenceValues;
- (unsigned long long)_permissionByApplyingDefaultsForMissingValuesInPermission:;
- (unsigned long long)permissionForDomain:;
- (BOOL)_removePreferenceValuesForDomains:fromPreference:;
- (BOOL)_isPreferenceValid:;
- (id)_standardizedURLForDomain:;
- (void)_invalidateAllPermissionsForDomain:;
- (void)_dispatchAsyncOnInternalQueue:;
- (void)_dispatchSyncOnInternalQueue:;
+ (id)sharedController;
+ (id)localizedStringForPerSitePreferenceValue:;
@end
