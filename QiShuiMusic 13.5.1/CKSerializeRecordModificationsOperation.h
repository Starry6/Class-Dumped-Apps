@interface CKSerializeRecordModificationsOperation : CKDatabaseOperation
@property (nonatomic) NSData serializedModifications;
@property (nonatomic) <CKSerializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKSerializeRecordModificationsOperationInfo operationInfo;
@property (nonatomic) NSArray recordsToSave;
@property (nonatomic) NSArray recordIDsToDelete;
@property (nonatomic) @? serializeCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)initWithRecordsToSave:recordIDsToDelete:;
- (void)setRecordIDsToDelete:;
- (id)activityCreate;
- (id)recordsToSave;
- (id)init;
- (id)recordIDsToDelete;
- (void)setRecordsToSave:;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (BOOL)hasCKOperationCallbacksSet;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)serializedModifications;
- (void)setSerializedModifications:;
- (void)handleSerialization:error:;
- (void)setSerializeCompletionBlock:;
- (id)serializeCompletionBlock;
@end
