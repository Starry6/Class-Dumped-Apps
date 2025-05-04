@interface AWEIMTableTransactionComponent : NSObject
@property (nonatomic) AWEIMUITaskQueue uiTaskQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
- (void)enqueueUITask:;
- (void)msg_enqueueCellHeightUpdateTaskFor:;
- (void)msg_cancelAllTasksOfMergeID:;
- (void)msg_enqueueUITask:;
- (void)msg_enqueueReloadDataTaskFor:;
- (void)msg_enqueueCellHeightUpdateTaskFor:completion:;
- (void)msg_enqueueCellHeightUpdateTaskFor:animation:completion:;
- (BOOL)msg_containsTaskOfBizID:;
- (id)uiTaskQueue;
- (id)mergeIDForReloadDataOnTableView:;
- (void)enqueueCellHeightUpdateTaskFor:completion:;
- (void)enqueueCellHeightUpdateTaskFor:animation:completion:;
- (id)mergIDForUpdateCellHeightOnTableView:;
- (void)cancelAllTasksOfMergeID:;
- (BOOL)containsTaskOfBizID:;
- (void)enqueueReloadDataTaskFor:;
- (void)enqueueCellHeightUpdateTaskFor:;
- (void)setUiTaskQueue:;
- (id)init;
- (void).cxx_destruct;
@end
