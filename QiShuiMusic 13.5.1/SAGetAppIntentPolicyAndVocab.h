@interface SAGetAppIntentPolicyAndVocab : SABaseClientBoundCommand
@property (nonatomic) NSArray clientIdentifiers;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)clientIdentifiers;
- (void)setClientIdentifiers:;
+ (id)getAppIntentPolicyAndVocab;
+ (id)getAppIntentPolicyAndVocabWithDictionary:context:;
@end
