@interface AWEPublishInfiniSaveAlbumStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWECreateAwemeResponse createAwemeResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createAwemeResponse;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (BOOL)handlePhotoNotAuthorized;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)setCreateAwemeResponse:;
- (id)initWithModel:createAwemeResponse:;
- (id)noteStyleCoverURL;
- (id)init;
- (void)run;
- (void).cxx_destruct;
@end
