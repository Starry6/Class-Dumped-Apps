@interface CHCandidateRefinementStep : CHPostprocessingStep
@property (nonatomic) BOOL shouldKeepOutOfPatternCandidates;
@property (nonatomic) BOOL shouldKeepDuplicateTokenIDs;
@property (nonatomic) BOOL shouldKeepOutOfLexiconAlternatives;
@property (nonatomic) BOOL shouldKeepAlternativeLengths;
@property (nonatomic) BOOL shouldKeepSubstrings;
@property (nonatomic) BOOL shouldKeepOriginalSpelling;
- (BOOL)shouldKeepOutOfPatternCandidates;
- (BOOL)shouldKeepDuplicateTokenIDs;
- (id)process:options:;
- (id)initWithShouldKeepOutOfPatternCandidates:shouldKeepDuplicateTokenIDs:shouldKeepOutOfLexiconAlternatives:shouldKeepAlternativeLengths:shouldKeepSubstrings:shouldKeepOriginalSpelling:;
- (void)setShouldKeepOutOfPatternCandidates:;
- (void)setShouldKeepDuplicateTokenIDs:;
- (BOOL)shouldKeepOutOfLexiconAlternatives;
- (void)setShouldKeepOutOfLexiconAlternatives:;
- (BOOL)shouldKeepAlternativeLengths;
- (void)setShouldKeepAlternativeLengths:;
- (BOOL)shouldKeepSubstrings;
- (void)setShouldKeepSubstrings:;
- (BOOL)shouldKeepOriginalSpelling;
- (void)setShouldKeepOriginalSpelling:;
@end
