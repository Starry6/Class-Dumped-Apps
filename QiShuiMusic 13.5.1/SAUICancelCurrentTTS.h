@interface SAUICancelCurrentTTS : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)cancelCurrentTTS;
+ (id)cancelCurrentTTSWithDictionary:context:;
@end
