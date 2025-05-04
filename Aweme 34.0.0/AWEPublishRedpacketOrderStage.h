@interface AWEPublishRedpacketOrderStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)setFlowModel:;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)init;
- (void)run;
- (id)initWithModel:;
- (void).cxx_destruct;
+ (BOOL)needRedpacketOrderWithModel:;
@end
