@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager
@property (nonatomic) WBSPerSitePreference geolocationPreference;
@property (nonatomic) WBSPerSitePreferencesSQLiteStore perSitePreferencesStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preferenceNameForPreference:;
- (id)preferences;
- (id)valuesForPreference:;
- (void)removePreferenceValuesForDomains:fromPreference:completionHandler:;
- (id)localizedStringForValue:inPreference:;
- (void)setValue:ofPreference:forDomain:completionHandler:;
- (void)getAllDomainsConfiguredForPreference:usingBlock:;
- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:;
- (id)perSitePreferencesStore;
- (void)getValueOfPreference:forDomain:withTimeout:usingBlock:;
- (void)getGeolocationSettingForDomain:completionHandler:;
- (id)geolocationPreference;
- (id)initWithPerSitePreferencesStore:;
- (void)setGeolocationSetting:forDomain:completionHandler:;
- (void)setDefaultGeolocationSetting:;
- (void)setDefaultGeolocationSetting:completionHandler:;
- (void)removeAllTemporaryPermissions;
- (void)removeAllPermissions;
- (void)removeAllPermissionsWithCompletionHandler:;
- (void)removeTemporaryPermissionsAddedAfterDate:completionHandler:;
- (void)removePermissionsAddedAfterDate:completionHandler:;
- (void)_removePermissionsPassingTest:completionHandler:;
- (id)perSitePreferenceValueForGeolocationSetting:;
- (BOOL)_isDateLessThanOneDayAgo:;
- (void)_setValue:forDomain:shouldIncludeTimestamp:completionHandler:;
@end
