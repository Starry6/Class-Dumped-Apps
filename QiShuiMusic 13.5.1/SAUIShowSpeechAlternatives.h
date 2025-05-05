@interface SAUIShowSpeechAlternatives : SABaseClientBoundCommand
@property (nonatomic) SASRecognition recognition;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (id)requestId;
- (void)setTitle:;
- (BOOL)requiresResponse;
- (id)title;
- (id)encodedClassName;
- (id)recognition;
- (void)setRequestId:;
- (void)setRecognition:;
+ (id)showSpeechAlternatives;
+ (id)showSpeechAlternativesWithDictionary:context:;
@end
