@interface TRIPruningFactorLevelCache : NSObject
- (id)init;
- (void)enumerateFactorLevelsUsingBlock:;
- (id)initWithPruningDelaySeconds:loadFactorLevels:;
- (id)objectForKeyedSubscript:;
- (id)factorLevelCurrentlyCachedForFactorName:;
- (void).cxx_destruct;
- (void)pruneSynchronously;
- (void)_populateCacheForRequiredKey:guardedData:;
@end
