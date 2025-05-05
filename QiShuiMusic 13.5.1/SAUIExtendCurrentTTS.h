@interface SAUIExtendCurrentTTS : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)extendCurrentTTS;
+ (id)extendCurrentTTSWithDictionary:context:;
@end
