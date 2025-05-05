@interface SAAXPauseSpeaking : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)pauseSpeaking;
+ (id)pauseSpeakingWithDictionary:context:;
@end
