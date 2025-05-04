@interface AWEPublishAlbumImageSaveToAlbumStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) q contentSourceType;
@property (nonatomic) @ awemeModel;
@property (nonatomic) <ACCImageAlbumSaveAsVideoPip> saveAsVideoPip;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)publishViewModel;
- (void)p_setup;
- (void)setPublishViewModel:;
- (void)setContentSourceType:;
- (void)p_handleStageDone;
- (BOOL)p_isSavePhotoToAlbum;
- (BOOL)handlePhotoNotAuthorized;
- (void)setSaveAsVideoPip:;
- (id)initWithPublishModel:awemeModel:contentSourceType:;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)saveAsVideoPip;
- (id)init;
- (void)run;
- (void).cxx_destruct;
- (long long)contentSourceType;
@end
