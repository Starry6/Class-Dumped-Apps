@interface PLLibraryScopeRuleManager : NSObject
@property (nonatomic) PLLibraryScope libraryScope;
@property (nonatomic) PLLibraryScopeRuleEvaluator ruleEvaluator;
@property (nonatomic) PLManagedAssetRuleInterpreter interpreter;
- (void).cxx_destruct;
- (id)libraryScope;
- (void)setLibraryScope:;
- (id)initWithLibraryScope:;
- (BOOL)evaluateAssetObjectIDs:withResultEnumerationBlock:;
- (BOOL)evaluateAssetObjectIDs:simulate:withResultEnumerationBlock:;
- (BOOL)evaluateAssetObjectIDs:simulate:predicateToFetchAssetsToEvaluate:withResultEnumerationBlock:;
- (BOOL)evaluateFaceObjectIDs:withResultEnumerationBlock:;
- (BOOL)evaluateFaceObjectIDs:simulate:withResultEnumerationBlock:;
- (id)_personUUIDsUsedInRules;
- (id)_fetchAssetObjectIDsContainedInMomentsToPropagateForMomentIdByAssetId:inManagedObjectContext:;
- (id)_fetchAssetObjectIDsContainedInMomentObjectIDs:excludingAssetObjectIDs:inManagedObjectContext:predicateToFetchAssetsToEvaluate:;
- (BOOL)_shouldTryToPropagateResultsToMomentWithInclusiveMatchedConditions:;
- (id)_predicateToIncludeAssetsSuggestedByCamera;
- (id)_predicateToIncludeAssetsCapturedByCamera;
- (id)ruleEvaluator;
- (void)setRuleEvaluator:;
- (id)interpreter;
- (void)setInterpreter:;
@end
