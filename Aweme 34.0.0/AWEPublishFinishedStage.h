@interface AWEPublishFinishedStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)setFlowModel:;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)updateDraft;
- (id)init;
- (void)run;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
