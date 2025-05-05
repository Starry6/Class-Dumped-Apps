@interface SAGetWatchAppIntentPolicyAndVocab : SABaseClientBoundCommand
@property (nonatomic) NSArray clientIdentifiers;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)clientIdentifiers;
- (void)setClientIdentifiers:;
+ (id)getWatchAppIntentPolicyAndVocab;
+ (id)getWatchAppIntentPolicyAndVocabWithDictionary:context:;
@end
