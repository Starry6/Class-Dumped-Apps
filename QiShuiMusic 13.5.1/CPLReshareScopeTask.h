@interface CPLReshareScopeTask : CPLEngineScopedTask
- (id)taskIdentifier;
- (void)cancel;
- (void).cxx_destruct;
- (void)launch;
- (void)_doOneIteration;
- (id)initWithEngineLibrary:session:clientCacheIdentifier:scope:transportScope:;
- (id)scopesForTask;
- (void)_bumpIgnoredDatesOfRecords:hasResharedSomeRecords:;
- (void)_bumpIgnoredDatesOfRejectedRecords:;
@end
