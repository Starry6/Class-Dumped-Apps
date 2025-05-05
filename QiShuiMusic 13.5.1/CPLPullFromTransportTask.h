@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask
- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:;
- (id)newScopedTaskWithScope:session:transportScope:clientCacheIdentifier:;
- (id)scopeFilterInTransaction:;
@end
