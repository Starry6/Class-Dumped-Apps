@interface SAUIInitiateStartSpeechRequest : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)initiateStartSpeechRequest;
+ (id)initiateStartSpeechRequestWithDictionary:context:;
@end
