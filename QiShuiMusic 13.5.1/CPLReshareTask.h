@interface CPLReshareTask : CPLEngineMultiscopeSyncTask
- (id)taskIdentifier;
- (id)enumerateScopesForTaskInTransaction:;
- (id)newScopedTaskWithScope:session:transportScope:clientCacheIdentifier:;
- (id)scopeFilterInTransaction:;
+ (id)cutoffDate;
@end
