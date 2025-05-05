@interface CPLScopeUpdateTask : CPLEngineMultiscopeSyncTask
- (id)taskIdentifier;
- (void).cxx_destruct;
- (id)enumerateScopesForTaskInTransaction:;
- (id)newScopedTaskWithScope:session:transportScope:clientCacheIdentifier:;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:;
@end
