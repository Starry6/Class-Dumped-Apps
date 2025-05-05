@interface CKArchiveRecordsOperation : CKDatabaseOperation
@property (nonatomic) NSMutableDictionary perItemErrors;
@property (nonatomic) <CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKArchiveRecordsOperationInfo operationInfo;
@property (nonatomic) NSArray recordIDs;
@property (nonatomic) @? recordArchivedBlock;
@property (nonatomic) @? archiveRecordsCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (void)setRecordIDs:;
- (id)activityCreate;
- (id)init;
- (id)recordIDs;
- (id)perItemErrors;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)setPerItemErrors:;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)initWithRecordIDs:;
- (void)handleRecordArchivalForRecordID:error:;
- (void)setRecordArchivedBlock:;
- (id)recordArchivedBlock;
- (void)setArchiveRecordsCompletionBlock:;
- (id)archiveRecordsCompletionBlock;
+ (void)applyDaemonCallbackInterfaceTweaks:;
@end
