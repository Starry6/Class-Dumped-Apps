@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand
@property (nonatomic) NSString recognitionText;
@property (nonatomic) NSArray voiceSearchResults;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)recognitionText;
- (void)setRecognitionText:;
- (id)voiceSearchResults;
- (void)setVoiceSearchResults:;
+ (id)voiceSearchFinalResult;
+ (id)voiceSearchFinalResultWithDictionary:context:;
@end
