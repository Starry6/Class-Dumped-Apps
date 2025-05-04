@interface AWEPublishParallelStage : AWEPublishContainerStage
@property (nonatomic) NSObject<OS_dispatch_queue> concurrentQueue;
@property (nonatomic) NSHashTable finishedStageTable;
@property (nonatomic) NSMutableArray executeStageArray;
@property (nonatomic) q maxConcurrentCount;
- (id)stageType;
- (void)setMaxConcurrentCount:;
- (void)stage:didChangeStatus:;
- (void)runStagesIfNeeded;
- (id)executeStageArray;
- (id)finishedStageTable;
- (void)setFinishedStageTable:;
- (void)setExecuteStageArray:;
- (id)concurrentQueue;
- (id)init;
- (void)run;
- (void)setConcurrentQueue:;
- (void).cxx_destruct;
- (long long)maxConcurrentCount;
@end
