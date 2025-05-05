@interface CPLMingleUtility : NSObject
+ (BOOL)_applyMingledBatch:scope:forStore:onPutBatchInPullQueue:error:;
+ (BOOL)mingleChangeBatch:scope:forStore:onPutBatchInPullQueue:error:;
+ (BOOL)_remapScopedIdentifier:to:class:inBatch:store:idMapping:cloudCache:remappedRecords:error:;
+ (BOOL)mingleRemappedBatch:scope:forStore:onPutBatchInPullQueue:error:;
+ (BOOL)mingleSharedRemappedBatch:scope:sharedScope:forStore:fixUpTasks:onPutBatchInPullQueue:error:;
+ (BOOL)applyShareRemapFixUpTasks:store:error:;
@end
