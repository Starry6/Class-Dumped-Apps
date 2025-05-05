@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext
@property (nonatomic) BOOL requiredTimeIntervalComplete;
@property (nonatomic) Q techniqueCount;
- (void).cxx_destruct;
- (id)description;
- (id)gatheredData;
- (id)captureGatheredData;
- (id)initWithParentContext:previousContext:requiredTechniqueIndices:deterministicTechniqueIndices:techniques:;
- (unsigned long long)indexForTechnique:;
- (BOOL)deterministicResultsCaptured;
- (id)_allGatheredDataByTechniqueIndex;
- (id)addResultData:forTechniqueAtIndex:;
- (id)lateResultDataForTechniqueAtIndex:;
- (BOOL)requiredTimeIntervalComplete;
- (void)setRequiredTimeIntervalComplete:;
- (unsigned long long)techniqueCount;
@end
