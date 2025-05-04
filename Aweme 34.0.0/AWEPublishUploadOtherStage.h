@interface AWEPublishUploadOtherStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) NSString uploadVideoUrl;
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParams;
@property (nonatomic) NSString uploadedResourceId;
@property (nonatomic) AWECreateAwemeResponse createAwemeResponse;
@property (nonatomic) <ACCFramesUploadNetServiceProtocol> framesUploadService;
- (id)aweme;
- (id)createAwemeResponse;
- (id)publishViewModel;
- (id)uploadParams;
- (void)setUploadParams:;
- (void)setPublishViewModel:;
- (id)uploadVideoUrl;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)setCreateAwemeResponse:;
- (void)setUploadVideoUrl:;
- (id)framesUploadService;
- (void)setFramesUploadService:;
- (id)initWithModel:uploadVideoUrl:uploadParams:uploadedResourceId:createAwemeResponse:;
- (void)setUploadedResourceId:;
- (id)uploadedResourceId;
- (void)updateFramesWithItemID:videoId:materialId:stickers:completion:;
- (void)run;
- (void).cxx_destruct;
- (id)stickers;
@end
