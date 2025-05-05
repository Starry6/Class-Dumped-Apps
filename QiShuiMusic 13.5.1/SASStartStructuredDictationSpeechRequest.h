@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest
@property (nonatomic) NSString structuredDictationType;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)structuredDictationType;
- (void)setStructuredDictationType:;
+ (id)startStructuredDictationSpeechRequest;
+ (id)startStructuredDictationSpeechRequestWithDictionary:context:;
@end
