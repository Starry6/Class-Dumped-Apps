@interface WBSPasswordPatternMatchSolver : NSObject
- (void).cxx_destruct;
- (id)initWithPassword:patternMatches:;
- (id)_partialSolutionWithEndIndex:patternCount:;
- (void)_setPartialSolution:withEndIndex:patternCount:;
- (void)_enumeratePartialSolutionsWithEndIndex:usingBlock:;
- (void)_updatePartialSolutionsWithPatternMatch:patternCount:;
- (id)_unwindSolution;
- (void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:;
- (id)_exhaustiveSearchPatternWithStartIndex:endIndex:;
- (id)optimalEvaluation;
@end
