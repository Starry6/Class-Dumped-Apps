@interface PLCloudResourceManager : NSObject
- (id)init;
- (double)_minimumIntervalBetweenOperations;
- (void)handleCPLConfigurationChange;
- (void)handleCPLStatusChange;
- (void)stop;
- (void)startAutomaticPrefetchAndPruneWithTimeout:;
- (void)clearPrefetchState;
- (void)updateCacheDeletePurgeableAmount;
- (id)statusForDebug:;
- (void).cxx_destruct;
- (void)handleOptimizeModeChange;
- (id)initWithCPLManager:libraryServicesManager:;
- (void)_runOnWorkQueueWithTransaction:block:;
- (void)invalidate;
@end
