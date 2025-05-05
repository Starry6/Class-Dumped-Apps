@interface SASmsCancelCurrentAudioPlayBack : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)cancelCurrentAudioPlayBack;
+ (id)cancelCurrentAudioPlayBackWithDictionary:context:;
@end
