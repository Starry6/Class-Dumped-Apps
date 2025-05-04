@interface AWEPublishHandleAwemeStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWECreateAwemeResponse createAwemeResponse;
- (id)createAwemeResponse;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)setFlowModel:;
- (id)flowModel;
- (void)saveResourcesToLocal;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)setCreateAwemeResponse:;
- (id)initWithModel:createAwemeResponse:;
- (void)updateDraft;
- (id)init;
- (void)run;
- (void).cxx_destruct;
@end
