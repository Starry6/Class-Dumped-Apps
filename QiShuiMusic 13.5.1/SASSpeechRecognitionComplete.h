@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand
@property (nonatomic) NSString sessionId;
- (void)setSessionId:;
- (id)sessionId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)speechRecognitionComplete;
+ (id)speechRecognitionCompleteWithDictionary:context:;
@end
