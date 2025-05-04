@interface AWEPublishInfiniReviewImageExportStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) NSMutableDictionary runtimeCustomStickFrames;
@property (nonatomic) ACCImageAlbumExportFramesResult result;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)p_generateCanvasUploadFrameImagesWithCompletion:;
- (void)p_doCustomerStickerFramesSaveWithCompletion:;
- (id)p_itemModelWithFilePath:isFullPath:imageIndex:type:;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)setRuntimeCustomStickFrames:;
- (id)runtimeCustomStickFrames;
- (void)p_getImageAlbumUploadFrameImagesWithCompletion:;
- (BOOL)p_isImageEnabled:;
- (id)allStickersWithProject:;
- (id)p_itemModelWithImageInfo:imageIndex:;
- (id)imagesInMultiSlotPicTemplateWith:imageIndex:;
- (id)init;
- (void)setResult:;
- (void)run;
- (void).cxx_destruct;
- (id)result;
@end
