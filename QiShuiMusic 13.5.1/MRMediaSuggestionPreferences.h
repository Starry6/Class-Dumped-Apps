@interface MRMediaSuggestionPreferences : NSObject
@property (nonatomic) @? userDisplayPreferencesDidChangeCallback;
@property (nonatomic) NSArray allContexts;
- (id)init;
- (void)dealloc;
- (void)setUserDisplayPreferencesDidChangeCallback:;
- (id)userDisplayPreferencesDidChangeCallback;
- (id)allContexts;
- (void).cxx_destruct;
- (id)disabledBundleIdentifiersInContext:;
- (id)description;
- (BOOL)suggestionsDisabledInContext:;
@end
