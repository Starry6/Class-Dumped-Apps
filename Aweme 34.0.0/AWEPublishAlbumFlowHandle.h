@interface AWEPublishAlbumFlowHandle : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
- (id)publishModel;
- (void)setPublishModel:;
- (void)saveServerExecutedImage;
- (void)takePhotoModeSaveWatermarkImage;
- (void)videoEffectSavePhoto:;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
