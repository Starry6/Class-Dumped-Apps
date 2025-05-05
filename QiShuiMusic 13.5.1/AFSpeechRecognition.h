@interface AFSpeechRecognition : NSObject
@property (nonatomic) NSArray phrases;
@property (nonatomic) NSArray utterances;
@property (nonatomic) double processedAudioDuration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)phrases;
- (id)initWithPhrases:;
- (id)initWithPhrases:utterances:;
- (id)oneBestTranscript;
- (id)nBestTranscripts;
- (id)oneBestTokenList;
- (id)nBestTokenLists;
- (id)initWithPhrases:utterances:processedAudioDuration:;
- (id)aceRecognition;
- (id)utterances;
- (double)processedAudioDuration;
+ (BOOL)supportsSecureCoding;
+ (id)transcriptFromTokens:;
+ (id)tokenListFromUtterance:phrases:;
+ (id)fakeOneBestFromPhrases:;
@end
