@interface CPLProcessStagedScopesScopeTask : CPLEngineScopedTask
- (id)taskIdentifier;
- (void)cancel;
- (void).cxx_destruct;
- (void)launch;
- (void)taskDidFinishWithError:;
- (id)initWithEngineLibrary:session:clientCacheIdentifier:scope:transportScope:;
- (void)_excludeScopes;
- (void)_deleteStagingScopeIfNecessary;
- (void)_startActualCleanup;
- (void)_checkDestinationAndProcessCleanup;
- (void)_cleanupStagedScopeInTransaction:store:;
@end
