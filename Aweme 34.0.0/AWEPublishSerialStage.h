@interface AWEPublishSerialStage : AWEPublishContainerStage
@property (nonatomic) q runningStageIndex;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (id)stageType;
- (void)stage:didChangeStatus:;
- (void)setRunningStageIndex:;
- (void)startNextStage;
- (long long)runningStageIndex;
- (id)init;
- (void)run;
- (id)serialQueue;
- (void)setSerialQueue:;
- (void).cxx_destruct;
@end
