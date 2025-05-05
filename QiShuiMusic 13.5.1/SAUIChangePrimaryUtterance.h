@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand
@property (nonatomic) NSString speechRecognitionId;
@property (nonatomic) q utteranceIndex;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)speechRecognitionId;
- (void)setSpeechRecognitionId:;
- (long long)utteranceIndex;
- (void)setUtteranceIndex:;
+ (id)changePrimaryUtterance;
+ (id)changePrimaryUtteranceWithDictionary:context:;
@end
