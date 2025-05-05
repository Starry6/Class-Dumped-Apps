@interface WBSForYouPerSitePreferenceManager : WBSPerSitePreferenceManager
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
- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:;
- (id)perSitePreferencesStore;
- (id)initWithPerSitePreferencesStore:;
- (void)allowedForYouRecommendationsFromRecommendations:completionHandler:;
- (void)setPreferenceValue:forURL:completionHandler:;
@end
