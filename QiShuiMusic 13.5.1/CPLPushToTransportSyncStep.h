@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep
@property (nonatomic) BOOL highPriority;
- (BOOL)highPriority;
- (void)cancelAllTasks:;
- (id)newTask;
- (id)initWithSyncManager:syncSession:highPriority:;
@end
