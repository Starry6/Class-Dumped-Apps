@interface AWEPublishInfiniReviewImageStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWEPublishInfiniReviewImageExportStage imageExportStage;
@property (nonatomic) AWEPublishAmazingUploadImagesStage uploadImagesStage;
@property (nonatomic) AWEPublishAlbumImageSendFramesRequestStage sendRequestStage;
@property (nonatomic) AWEPublishSerialStage serialStage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)stage:didChangeStatus:;
- (void)stage:didUpdateProgress:;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)stageArray;
- (id)serialStage;
- (id)imageExportStage;
- (id)uploadImagesStage;
- (id)sendRequestStage;
- (void)setImageExportStage:;
- (void)setUploadImagesStage:;
- (void)setSendRequestStage:;
- (void)setSerialStage:;
- (void)run;
- (void).cxx_destruct;
@end
