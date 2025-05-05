@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask
@property (nonatomic) BOOL highPriority;
- (id)taskIdentifier;
- (void)setHighPriority:;
- (void)task:didFinishWithError:;
- (void)cancel:;
- (BOOL)highPriority;
- (id)enumerateScopesForTaskInTransaction:;
- (id)newScopedTaskWithScope:session:transportScope:clientCacheIdentifier:;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:;
- (id)scopeFilterInTransaction:;
@end
