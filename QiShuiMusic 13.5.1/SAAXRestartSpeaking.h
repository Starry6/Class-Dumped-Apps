@interface SAAXRestartSpeaking : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)restartSpeaking;
+ (id)restartSpeakingWithDictionary:context:;
@end
