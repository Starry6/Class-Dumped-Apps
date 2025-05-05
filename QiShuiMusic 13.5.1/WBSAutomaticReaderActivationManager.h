@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager
@property (nonatomic) WBSPerSitePreference readerPreference;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) WBSPerSitePreferencesSQLiteStore perSitePreferencesStore;
- (id)init;
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
- (void)getAutomaticReaderEnabledForDomain:usingBlock:;
- (id)readerPreference;
- (id)initWithPerSitePreferencesStore:;
- (void)getAutomaticReaderStateForDomain:usingBlock:;
- (void)setAutomaticReaderEnabled:forDomain:;
- (void)getAutomaticReaderEnabledByDefaultUsingBlock:;
- (void)setAutomaticReaderEnabledByDefault:removingExistingPreferencesForSites:;
- (void)submitOptInOutStateForAnalytics;
- (void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
@end
