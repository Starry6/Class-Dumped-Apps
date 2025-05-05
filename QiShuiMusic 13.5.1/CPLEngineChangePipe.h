@interface CPLEngineChangePipe : CPLEngineStorage
@property (nonatomic) Q countOfQueuedBatches;
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEmpty;
- (BOOL)popNextBatchWithError:;
- (BOOL)compactChangeBatchesWithError:;
- (id)popAllChangeBatchesWithError:;
- (BOOL)appendChangeBatch:error:;
- (id)nextBatch;
- (BOOL)hasSomeChangeWithScopeFilter:;
- (BOOL)hasSomeChangeWithScopedIdentifier:;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:;
- (unsigned long long)scopeType;
- (BOOL)hasQueuedBatches;
- (BOOL)deleteRecordsForScopeIndex:maxCount:deletedCount:error:;
- (unsigned long long)countOfQueuedBatches;
- (BOOL)popChangeBatch:error:;
- (BOOL)deleteAllChangesWithScopeFilter:error:;
- (id)allChangeBatches;
- (BOOL)deleteAllChangeBatchesWithError:;
@end
