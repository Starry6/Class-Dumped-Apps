@interface WBSLockdownModePreferenceManager : WBSPerSitePreferenceManager
@property (nonatomic) WBSPerSitePreference lockdownPreference;
@property (nonatomic) WBSPerSitePreferencesSQLiteStore perSitePreferencesStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preferenceNameForPreference:;
- (id)preferences;
- (id)valuesForPreference:;
- (id)offValueForPreference:;
- (id)onValueForPreference:;
- (id)localizedStringForValue:inPreference:;
- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:;
- (id)perSitePreferencesStore;
- (void)didUpdatePreference:toValue:forDomain:;
- (void)getLockdownModeEnabledForDomain:withTimeout:fallbackEnabledState:usingBlock:;
- (id)initWithPerSitePreferenceStore:;
- (id)lockdownPreference;
- (BOOL)preferenceDoesNotHaveForOtherWebsitesDefault:;
- (void)setLockdownModeEnabled:forDomain:;
@end
