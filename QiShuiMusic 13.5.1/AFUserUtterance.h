@interface AFUserUtterance : NSObject
@property (nonatomic) NSDictionary correctionIdentifier;
@property (nonatomic) NSArray dictationResult;
@property (nonatomic) NSArray allPhrases;
- (void).cxx_destruct;
- (id)description;
- (id)correctionIdentifier;
- (id)initWithPhrases:correctionIdentifier:;
- (id)initWithPhrases:utterances:;
- (id)initWithPhrases:sentenceConfidence:utterances:correctionIdentifier:;
- (id)initWithTokens:correctionIdentifier:;
- (id)initWithString:correctionIdentifier:;
- (long long)numberOfAlternativeUtterances;
- (id)bestTextInterpretation;
- (id)rangeListOfDifferingTextFromUtteranceAtIndex:comparedToBaseUtteranceAtIndex:;
- (id)speechTokensForUtteranceAtIndex:;
- (id)longestCommonSubsequenceBetweenList:andList:;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:comparedToBaseUtteranceAtIndex:;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:comparedToBaseTokenList:;
- (id)rangeListOfDifferingTextFromTargetTokenList:comparedToBaseTokenList:;
- (id)textOfUtteranceAtIndex:;
- (id)interpretationOfUtteranceAtIndex:;
- (id)allRecognitionStringsAndScores;
- (void)_updatePhraseswithSwapIndices:;
- (void)_updateUtteranceswithAlternativeUtteranceAtIndex:swapIndices:;
- (id)updateDictationResult:withAlternativeUtteranceAtIndex:;
- (id)allPhrases;
- (id)dictationResult;
- (id)streamingTokens;
@end
