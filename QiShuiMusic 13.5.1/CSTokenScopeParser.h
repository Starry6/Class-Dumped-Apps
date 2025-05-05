@interface CSTokenScopeParser : NSObject
- (id)init;
- (void)loadScopeKeyMapTableForCurrentLocale;
- (void)loadDefaultScopeKeyMapTable;
- (id)tokenScopeConfigurationTable;
- (id)scopeKeyMapTable;
- (id)tokenScopeConfigurationForKey:;
- (void)updateScopeKeyMapTableIfNeeded;
- (long long)indexForScopeKey:;
- (id)tokenFromConfiguration:userString:displayString:handle:;
- (id)suggestionTokenForString:;
- (id)messageSuggestionTokenForString:;
@end
