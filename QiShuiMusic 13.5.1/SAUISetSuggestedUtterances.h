@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand
@property (nonatomic) NSString language;
@property (nonatomic) NSArray utterances;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setUtterances:;
- (id)utterances;
+ (id)setSuggestedUtterances;
+ (id)setSuggestedUtterancesWithDictionary:context:;
@end
