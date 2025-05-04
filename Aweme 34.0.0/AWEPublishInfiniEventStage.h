@interface AWEPublishInfiniEventStage : AWEPublishBaseStage
@property (nonatomic) <AWEPublishEventProtocol> event;
- (id)stageType;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)run;
- (void)setEvent:;
- (id)description;
- (id)initWithEvent:;
- (void).cxx_destruct;
- (id)event;
- (void)handleEvent:;
@end
