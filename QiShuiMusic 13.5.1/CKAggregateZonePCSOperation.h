@interface CKAggregateZonePCSOperation : CKDatabaseOperation
@property (nonatomic) CKAggregateZonePCSOperationInfo operationInfo;
@property (nonatomic) NSArray sourceZoneIDs;
@property (nonatomic) CKRecordZone targetZone;
@property (nonatomic) @? aggregateZonePCSCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (id)init;
- (void)performCKOperation;
- (void)setTargetZone:;
- (id)targetZone;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)initWithSourceZoneIDs:targetZone:;
- (void)setAggregateZonePCSCompletionBlock:;
- (id)aggregateZonePCSCompletionBlock;
- (id)sourceZoneIDs;
- (void)setSourceZoneIDs:;
@end
