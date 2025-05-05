@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand
@property (nonatomic) NSString recognitionText;
@property (nonatomic) BOOL stable;
@property (nonatomic) NSArray voiceSearchResults;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)stable;
- (id)recognitionText;
- (void)setRecognitionText:;
- (id)voiceSearchResults;
- (void)setVoiceSearchResults:;
- (void)setStable:;
+ (id)voiceSearchPartialResult;
+ (id)voiceSearchPartialResultWithDictionary:context:;
@end
