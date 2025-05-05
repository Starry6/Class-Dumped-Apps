@interface SALocalSearchAnswerRerouteSuggestion : SADomainCommand
@property (nonatomic) NSString response;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)response;
- (id)encodedClassName;
- (void)setResponse:;
+ (id)answerRerouteSuggestion;
+ (id)answerRerouteSuggestionWithDictionary:context:;
@end
