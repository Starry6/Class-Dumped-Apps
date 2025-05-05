@interface SASSpeechPartialResult : SABaseClientBoundCommand
@property (nonatomic) NSString language;
@property (nonatomic) NSArray tokens;
- (id)af_tokens;
- (id)af_correctionContext;
- (id)af_userUtteranceValue;
- (id)af_bestTextInterpretation;
- (id)af_speechModel;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (BOOL)requiresResponse;
- (void)setTokens:;
- (id)encodedClassName;
- (id)tokens;
+ (id)createUsingPhrases:andUtterances:;
+ (id)speechPartialResult;
+ (id)speechPartialResultWithDictionary:context:;
@end
