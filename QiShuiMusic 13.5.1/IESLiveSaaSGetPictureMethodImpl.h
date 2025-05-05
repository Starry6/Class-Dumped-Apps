@interface IESLiveSaaSGetPictureMethodImpl : IESLiveSaaSGetPictureMethod
@property (nonatomic) IESLiveSaaSGetPictureHandler handler;
@property (nonatomic) IESLiveSaaSGetPictureParamModel config;
@property (nonatomic) IESLiveSaaSImageEditViewController imageEditViewController;
- (void)callWithParamModel:completionHandler:;
- (id)imageEditViewController;
- (id)p_cacheContainerDirPath;
- (void)p_checkImageAndOpenCropVC:pickerVC:completion:;
- (id)p_fullCachePathWithDirectory:fileName:;
- (void)p_getPictureWithCompletion:;
- (void)p_openImageCropVC:withPickerController:completion:;
- (void)p_parseImage:completion:;
- (void)setImageEditViewController:;
- (void)setConfig:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)config;
@end
