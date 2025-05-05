@interface SAAXSpeakSlower : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)speakSlower;
+ (id)speakSlowerWithDictionary:context:;
@end
