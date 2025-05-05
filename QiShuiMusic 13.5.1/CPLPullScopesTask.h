@interface CPLPullScopesTask : CPLEngineSyncTask
- (id)taskIdentifier;
- (void)cancel;
- (void).cxx_destruct;
- (void)launch;
- (id)initWithEngineLibrary:session:;
- (BOOL)_checkShouldHandleBatchInTransaction:;
- (void)_handleChangedOrNewScopes:deletedScopeIdentifiers:newScopeListSyncAnchor:;
- (void)_handleFinalScopeListSyncAnchor:error:;
@end
