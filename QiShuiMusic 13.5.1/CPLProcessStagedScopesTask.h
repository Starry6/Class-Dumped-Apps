@interface CPLProcessStagedScopesTask : CPLEngineMultiscopeSyncTask
- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:;
- (id)newScopedTaskWithScope:session:transportScope:clientCacheIdentifier:;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:;
- (void)didProcessStagedScope:;
@end
