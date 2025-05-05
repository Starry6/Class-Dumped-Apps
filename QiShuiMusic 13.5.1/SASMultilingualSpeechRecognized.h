@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand
@property (nonatomic) BOOL multilingualDisabled;
@property (nonatomic) NSDictionary speechRecognizedByLanguage;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)speechRecognizedByLanguage;
- (BOOL)multilingualDisabled;
- (void)setMultilingualDisabled:;
- (void)setSpeechRecognizedByLanguage:;
+ (id)multilingualSpeechRecognized;
+ (id)multilingualSpeechRecognizedWithDictionary:context:;
@end
