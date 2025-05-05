@interface KVSpanMatchResultInterpreter : NSObject
@property (nonatomic) KVSpanMatchPolicy fuzzyWithPriorsPolicy;
@property (nonatomic) KVSpanMatchPolicy exactWithPriorsPolicy;
@property (nonatomic) KVSpanMatchPolicy fuzzyPolicy;
@property (nonatomic) KVSpanMatchPolicy exactPolicy;
@property (nonatomic) KVSpanMatchPolicy fuzzyWithAliasPolicy;
@property (nonatomic) KVSpanMatchPolicy exactWithAliasPolicy;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPriorRetriever:;
- (void)addPolicyOverride:forItemType:;
- (id)interpretSpanMatchResults:ofQuery:;
- (id)_sortCandidatesAndPopulatePriors:;
- (id)_groupKeyForFieldMatches:itemType:;
- (id)_filterRankAndThresholdCandidates:ofQuery:withPolicy:;
- (float)_scoreSpanMatch:policy:;
- (void)_addScoredMatch:toSortedArray:;
- (id)_applyRegionalSpanRankingToSortedGroupMatches:regionalThresholdScalar:globalThresholdScalar:maximalScore:;
- (BOOL)_checkEligibilityOfSpanMatch:allowPartialMatch:allowApproxMatch:allowAliasMatch:query:;
- (id)_rankerPolicyForGroupKey:;
- (id)fuzzyWithPriorsPolicy;
- (id)exactWithPriorsPolicy;
- (id)fuzzyPolicy;
- (id)exactPolicy;
- (id)fuzzyWithAliasPolicy;
- (id)exactWithAliasPolicy;
@end
