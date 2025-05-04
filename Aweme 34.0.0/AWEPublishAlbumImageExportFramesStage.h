@interface AWEPublishAlbumImageExportFramesStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) q contentSourceType;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)setContentSourceType:;
- (void)p_generateCanvasUploadFrameImagesWithCompletion:;
- (id)p_getImageAlbumUploadFrameImages;
- (void)p_doCustomerStickerFramesSaveWithCompletion:;
- (id)p_itemModelWithFilePath:isFullPath:imageIndex:type:;
- (id)initWithModel:contentSourceType:;
- (void)run;
- (void).cxx_destruct;
- (long long)contentSourceType;
@end
