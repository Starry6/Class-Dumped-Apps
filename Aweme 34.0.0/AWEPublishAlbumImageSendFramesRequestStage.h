@interface AWEPublishAlbumImageSendFramesRequestStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWECreateAwemeResponse createAwemeResponse;
@property (nonatomic) NSArray uploadFramesItems;
- (id)createAwemeResponse;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (id)uploadFramesItems;
- (void)setUploadFramesItems:;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)setCreateAwemeResponse:;
- (void)processFramesParams;
- (void)startRequestWithImageContent:;
- (id)initWithModel:createAwemeResponse:uploadFramesItems:;
- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)uploadFinished;
@end
