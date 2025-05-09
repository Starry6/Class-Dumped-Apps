@interface CVNLPActivationMatrix : NSObject
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} _espressoBuffer;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} _indexBuffer;
@property (nonatomic) ^d _doubleScoreMatrix;
@property (nonatomic) MLMultiArray _multiArray;
@property (nonatomic) MLMultiArray _indexArray;
@property (nonatomic) q _timestepCount;
@property (nonatomic) q _observationCount;
@property (nonatomic) q _timeStride;
@property (nonatomic) q _observationStride;
@property (nonatomic) q _type;
@property (nonatomic) {CVNLPTextDecodingPruningPolicy=qBfI} _pruningPolicy;
@property (nonatomic) q _cachedPriorityQueueTimestep;
@property (nonatomic) ^v _cachedTimesample;
@property (nonatomic) BOOL _isDoubleDataType;
@property (nonatomic) BOOL _usingIndexes;
@property (nonatomic) q _cachedBlankIndexTimestep;
@property (nonatomic) q _cachedBlankIndex;
@property (nonatomic) NSOrderedSet characterObservations;
@property (nonatomic) q blankIndex;
@property (nonatomic) q domainType;
- (long long)_type;
- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)_indexBuffer;
- (id)_multiArray;
- (id)_pruningPolicy;
- (id)initWithBuffer:domainType:characterObservations:blankIndex:pruningPolicy:;
- (id)initWithBuffer:indexBuffer:domainType:characterObservations:blankIndex:pruningPolicy:;
- (id)initWithMultiArray:domainType:characterObservations:blankIndex:pruningPolicy:;
- (id)initWithMultiArray:characterObservations:blankIndex:pruningPolicy:;
- (id)initWithMultiArray:indexArray:domainType:characterObservations:blankIndex:pruningPolicy:;
- (long long)timestepCount;
- (long long)observationCount;
- (double)probabilityForObservationIndex:timestep:;
- (double)logProbabilityForObservationIndex:timestep:;
- (double)_valueForObservationIndex:timestep:;
- (long long)blankIndexForTimestep:;
- (double)probabilityForBlankAtTimestep:;
- (double)logProbabilityForBlankAtTimestep:;
- (long long)characterIndexForObservationIndex:timestep:;
- (void)enumerateNonBlankCandidatesInTimestep:block:;
- (id)_candidateSymbolAtIndex:forTimestep:outputScore:;
- (void)_enumerateNonBlankCandidatesInTimestep:block:;
- (void)_sortNonBlankCandidatesForTimestep:;
- (id)topCandidateForTimestep:outputLogProbability:;
- (id)topCandidateForTimestep:outputLogProbability:outputIndex:;
- (id)topCandidateForTimestep:outputProbability:outputIndex:;
- (id)characterObservations;
- (void)setCharacterObservations:;
- (long long)blankIndex;
- (void)setBlankIndex:;
- (long long)domainType;
- (id)_espressoBuffer;
- (void)set_espressoBuffer:;
- (void)set_indexBuffer:;
- (id)_doubleScoreMatrix;
- (void)set_doubleScoreMatrix:;
- (void)set_multiArray:;
- (id)_indexArray;
- (void)set_indexArray:;
- (long long)_timestepCount;
- (void)set_timestepCount:;
- (long long)_observationCount;
- (void)set_observationCount:;
- (long long)_timeStride;
- (void)set_timeStride:;
- (long long)_observationStride;
- (void)set_observationStride:;
- (void)set_type:;
- (void)set_pruningPolicy:;
- (long long)_cachedPriorityQueueTimestep;
- (void)set_cachedPriorityQueueTimestep:;
- (id)_cachedTimesample;
- (void)set_cachedTimesample:;
- (BOOL)_isDoubleDataType;
- (void)set_isDoubleDataType:;
- (BOOL)_usingIndexes;
- (void)set_usingIndexes:;
- (long long)_cachedBlankIndexTimestep;
- (long long)_cachedBlankIndex;
@end
