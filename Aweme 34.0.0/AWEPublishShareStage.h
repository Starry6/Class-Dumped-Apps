@interface AWEPublishShareStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWECreateAwemeResponse createAwemeResponse;
- (id)createAwemeResponse;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (BOOL)handlePhotoNotAuthorized;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)setCreateAwemeResponse:;
- (id)initWithModel:createAwemeResponse:;
- (id)init;
- (void)run;
- (void).cxx_destruct;
@end
