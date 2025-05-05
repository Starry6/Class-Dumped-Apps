@interface WBSAutoplayPreferenceManager : WBSPerSitePreferenceManager
@property (nonatomic) WBSPerSitePreference autoplayPreference;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) WBSPerSitePreferencesSQLiteStore perSitePreferencesStore;
- (id)init;
- (id)preferenceNameForPreference:;
- (id)preferences;
- (id)valuesForPreference:;
- (id)localizedStringForValue:inPreference:;
- (void)prepareForTermination;
- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:;
- (id)perSitePreferencesStore;
- (void)didUpdatePreference:toValue:forDomain:;
- (void)getValueOfPreference:forDomain:withTimeout:usingBlock:;
- (id)initWithPerSitePreferencesStore:allowListManager:;
- (void)getAutoplayPreferenceValueForDomain:withTimeout:fallbackValue:completionHandler:;
- (void)setAutoplayPreferenceValue:forURL:completionHandler:;
- (id)autoplayPreference;
@end
