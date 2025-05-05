@interface KVSpanMatchPolicy : NSObject
- (id)init;
- (id)initWithOptions:;
- (id)description;
- (BOOL)enableRankingWithPriors;
- (BOOL)useTopFive;
- (float)matchScoreWeight;
- (float)priorScoreWeight;
- (float)regionalRelativeThreshold;
- (float)globalRelativeThreshold;
- (float)absoluteThreshold;
- (BOOL)allowPartialMatch;
- (BOOL)allowApproxMatch;
- (BOOL)prioritizeExactMatch;
- (BOOL)allowAliasMatch;
@end
