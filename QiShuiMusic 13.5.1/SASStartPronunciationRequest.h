@interface SASStartPronunciationRequest : SASStartSpeech
@property (nonatomic) SASPronunciationContext context;
- (id)groupIdentifier;
- (id)context;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setContext:;
+ (id)startPronunciationRequest;
+ (id)startPronunciationRequestWithDictionary:context:;
@end
