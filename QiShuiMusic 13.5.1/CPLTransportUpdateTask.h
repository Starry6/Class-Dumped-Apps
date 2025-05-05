@interface CPLTransportUpdateTask : CPLEngineMultiscopeSyncTask
- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:;
- (id)newScopedTaskWithScope:session:transportScope:clientCacheIdentifier:;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
@end
