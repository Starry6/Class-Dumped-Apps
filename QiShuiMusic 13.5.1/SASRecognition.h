@interface SASRecognition : AceObject
@property (nonatomic) NSArray phrases;
@property (nonatomic) q sentenceConfidence;
@property (nonatomic) NSArray utterances;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)af_speechPhrases;
- (id)af_userUtteranceValueWithRefId:sessionId:;
- (id)af_bestTextInterpretationWithRefId:sessionId:;
- (id)af_speechUtterances;
- (id)af_correctionContextWithRefId:sessionId:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)phrases;
- (void)setPhrases:;
- (void)setUtterances:;
- (long long)sentenceConfidence;
- (void)setSentenceConfidence:;
- (id)utterances;
+ (id)recognition;
+ (id)recognitionWithDictionary:context:;
@end
