@interface CKDeserializeRecordModificationsOperation : CKDatabaseOperation
@property (nonatomic) NSArray recordsToSave;
@property (nonatomic) NSArray recordIDsToDelete;
@property (nonatomic) <CKDeserializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKDeserializeRecordModificationsOperationInfo operationInfo;
@property (nonatomic) NSData serializedModifications;
@property (nonatomic) @? deserializeCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
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
- (void)handleDeserializationOfSaves:deletes:error:;
- (id)initWithSerializedModifications:;
- (void)setDeserializeCompletionBlock:;
- (id)deserializeCompletionBlock;
- (id)serializedModifications;
- (void)setSerializedModifications:;
+ (void)applyDaemonCallbackInterfaceTweaks:;
@end
