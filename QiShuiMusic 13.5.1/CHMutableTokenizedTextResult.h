@interface CHMutableTokenizedTextResult : CHTokenizedTextResult
@property (nonatomic) NSArray tokenColumns;
@property (nonatomic) q changeableTokenColumnCount;
@property (nonatomic) q precedingLineBreaks;
- (id)copyWithZone:;
- (void)setTokenColumns:;
- (void)setTranscriptionPaths:scores:;
- (void)appendTokenColumns:;
- (void)adjustColumns;
- (void)prependTokenColumns:prefixTopPath:;
- (void)trimTokensToTranscriptionPathCount:;
- (void)filterCandidatesWithOutOfPattern:duplicateTokenIDs:keepOutOfLexiconAlternatives:keepAlternativeLengths:keepSubstrings:shouldKeepOriginalSpelling:;
- (void)setPrecedingLineBreaks:;
- (void)setChangeableTokenColumnCount:;
- (void)offsetAllStrokeIndexesBy:;
- (void)remapAllStrokeIndexesWithArray:;
@end
