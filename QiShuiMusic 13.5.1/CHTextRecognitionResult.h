@interface CHTextRecognitionResult : CHRecognitionResult
@property (nonatomic) NSString string;
@property (nonatomic) NSArray wordRanges;
@property (nonatomic) NSArray wordIDs;
@property (nonatomic) NSArray wordRecognitionScores;
@property (nonatomic) NSArray wordCombinedScores;
@property (nonatomic) NSArray wordStrokeSets;
@property (nonatomic) NSArray wordLexicalEntries;
@property (nonatomic) NSArray wordPatternEntries;
@property (nonatomic) NSIndexSet rareWordIndexes;
@property (nonatomic) NSIndexSet inappropriateWordIndexes;
@property (nonatomic) BOOL isTextReplacement;
- (id)string;
- (void).cxx_destruct;
- (id)mecabraCandidate;
- (id)initWithString:score:wordRanges:wordIDs:wordRecognitionScores:wordCombinedScores:wordStrokeSets:wordLexicalEntries:wordPatternEntries:rareWordIndexes:inappropriateWordIndexes:isTextReplacement:;
- (id)wordRanges;
- (id)wordIDs;
- (id)wordRecognitionScores;
- (id)wordCombinedScores;
- (id)wordStrokeSets;
- (id)wordLexicalEntries;
- (id)wordPatternEntries;
- (id)rareWordIndexes;
- (id)inappropriateWordIndexes;
- (BOOL)isTextReplacement;
@end
