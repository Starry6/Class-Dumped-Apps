@interface WBSContentBlockersPreferenceManager : WBSPerSitePreferenceManager
@property (nonatomic) WBSPerSitePreference contentBlockersPreference;
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
- (void)getContentBlockersEnabledStateForDomain:withTimeout:fallbackEnabledState:completionHandler:;
- (id)contentBlockersPreference;
- (id)initWithPerSitePreferencesStore:;
@end
