@interface AWEIMTableTransactionComponent : NSObject
@property (nonatomic) AWEIMUITaskQueue uiTaskQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
- (void)setUiTaskQueue:;
- (void)enqueueCellHeightUpdateTaskForTableView:completion:;
- (void)enqueueCellHeightUpdateTaskIfThereIsNone:;
- (void)enqueueCellHeightUpdateTaskIfThereIsNone:completion:;
- (void)enqueueDataSourceModifyTask:forTableView:;
- (void)enqueueReloadDataTaskForTableView:;
- (void)enqueueReloadDataTaskIfThereIsNone:;
- (id)mergIDForUpdateCellHeightOnTableView:;
- (id)mergeIDForReloadDataOnTableView:;
- (void)msg_enqueueCellHeightUpdateTaskIfThereIsNone:;
- (void)msg_enqueueCellHeightUpdateTaskIfThereIsNone:completion:;
- (void)msg_enqueueDataSourceModifyTask:forTableView:;
- (void)msg_enqueueReloadDataTaskIfThereIsNone:;
- (void)msg_enqueueUITask:;
- (void)msg_removeAllTasksOfMergeID:;
- (id)uiTaskQueue;
- (id)init;
- (void).cxx_destruct;
@end
