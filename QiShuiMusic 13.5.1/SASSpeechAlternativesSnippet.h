@interface SASSpeechAlternativesSnippet : SAUISnippet
@property (nonatomic) q maxEntryToShow;
@property (nonatomic) SASRecognition recognition;
@property (nonatomic) NSString sessionId;
- (void)setSessionId:;
- (id)sessionId;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)recognition;
- (void)setRecognition:;
- (long long)maxEntryToShow;
- (void)setMaxEntryToShow:;
+ (id)speechAlternativesSnippet;
+ (id)speechAlternativesSnippetWithDictionary:context:;
@end
