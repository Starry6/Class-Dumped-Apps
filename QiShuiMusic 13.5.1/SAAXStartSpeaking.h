@interface SAAXStartSpeaking : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)startSpeaking;
+ (id)startSpeakingWithDictionary:context:;
@end
