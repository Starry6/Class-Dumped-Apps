@interface CVNLPTextDecodingBeamSearchConfiguration : CVNLPTextDecodingConfiguration
@property (nonatomic) Q beamWidth;
@property (nonatomic) Q pathCount;
@property (nonatomic) BOOL shouldOptimizeAlignment;
@property (nonatomic) BOOL pruneProblematicMixedScriptWordPaths;
@property (nonatomic) BOOL shouldApplyWordLMToLastWord;
@property (nonatomic) @? scoringFunction;
- (unsigned long long)pathCount;
- (id)initWithCommitActionBehavior:scoringFunction:beamWidth:pathCount:shouldOptimizeAlignment:pruneProblematicMixedScriptWordPaths:shouldApplyWordLMToLastWord:;
- (id)initWithCommitActionBehavior:scoringFunction:beamWidth:pathCount:shouldOptimizeAlignment:pruneProblematicMixedScriptWordPaths:;
- (id)initWithCommitActionBehavior:scoringFunction:beamWidth:pathCount:shouldOptimizeAlignment:;
- (id)initWithCommitActionBehavior:scoringFunction:beamWidth:pathCount:;
- (id)initWithCommitActionBehavior:beamWidth:pathCount:shouldOptimizeAlignment:;
- (id)initWithCommitActionBehavior:beamWidth:pathCount:shouldOptimizeAlignment:pruneProblematicMixedScriptWordPaths:;
- (unsigned long long)beamWidth;
- (void)setBeamWidth:;
- (void)setPathCount:;
- (BOOL)shouldOptimizeAlignment;
- (void)setShouldOptimizeAlignment:;
- (BOOL)pruneProblematicMixedScriptWordPaths;
- (void)setPruneProblematicMixedScriptWordPaths:;
- (BOOL)shouldApplyWordLMToLastWord;
- (void)setShouldApplyWordLMToLastWord:;
- (id)scoringFunction;
@end
