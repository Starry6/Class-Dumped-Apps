@interface CPLMingleChangesScopeTask : CPLEngineScopedTask
- (id)taskIdentifier;
- (void)cancel;
- (void).cxx_destruct;
- (void)launch;
- (BOOL)checkScopeIsValidInTransaction:;
- (void)taskDidFinishWithError:;
- (id)initWithEngineLibrary:session:clientCacheIdentifier:scope:transportScope:;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFullInTransaction:;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_noteBatchWasAddedInPullQueue:fromBatch:transaction:;
- (void)_finishMingling;
- (void)_mingleOtherChanges;
- (void)_acknownledgeFixUpTasks:;
- (void)_fixUpPrivateRecordsPointingToRemappedSharedRecords:;
- (void)_mingleSharedRemappings;
- (void)_mingleRemappings;
@end
