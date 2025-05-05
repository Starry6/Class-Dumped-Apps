@interface CPLEngineForceProcessingStagedScopesTask : CPLEngineForceSyncTask
- (id)description;
- (BOOL)forcingProcessedStagedScopes;
- (BOOL)bypassForceSyncLimitations;
- (id)initWithEngineLibrary:delegate:;
@end
