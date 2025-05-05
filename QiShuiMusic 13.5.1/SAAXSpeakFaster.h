@interface SAAXSpeakFaster : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)speakFaster;
+ (id)speakFasterWithDictionary:context:;
@end
