@interface SALocalSearchNavigationPromptRerouteSuggestion : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)navigationPromptRerouteSuggestion;
+ (id)navigationPromptRerouteSuggestionWithDictionary:context:;
@end
