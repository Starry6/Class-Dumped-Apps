@interface CVNLPCTCBeamState : NSObject
@property (nonatomic) NSMutableDictionary mutablePaths;
- (id)init;
- (id)paths;
- (id)debugDescription;
- (void)addPath:;
- (void).cxx_destruct;
- (id)pathForString:;
- (void)enumeratePathsWithBlock:;
- (id)sortedKeys;
- (void)kBest:discarded:k:shouldUpdateLMState:;
- (void)mergePathsWithTrailingWhitespaces;
- (void)applyWordLanguageModelProbabilityToPaths;
- (id)mutablePaths;
- (void)setMutablePaths:;
@end
