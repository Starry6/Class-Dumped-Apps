@interface CPLMingleChangesTask : CPLEngineMultiscopeSyncTask
- (id)taskIdentifier;
- (void)launch;
- (id)enumerateScopesForTaskInTransaction:;
- (id)newScopedTaskWithScope:session:transportScope:clientCacheIdentifier:;
- (void)taskDidFinishWithError:;
- (id)scopeFilterInTransaction:;
- (BOOL)shouldProcessScope:inTransaction:;
@end
