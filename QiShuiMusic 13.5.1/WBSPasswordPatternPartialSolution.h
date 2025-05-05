@interface WBSPasswordPatternPartialSolution : NSObject
@property (nonatomic) WBSPasswordPatternMatch patternMatch;
@property (nonatomic) double guessesRequiredWithoutPatternCountPenalty;
@property (nonatomic) double guessesRequiredWithPatternCountPenalty;
- (void).cxx_destruct;
- (id)initWithPatternMatch:guessesRequiredWithoutPatternCountPenalty:withPatternCountPenalty:;
- (id)patternMatch;
- (double)guessesRequiredWithoutPatternCountPenalty;
- (double)guessesRequiredWithPatternCountPenalty;
@end
