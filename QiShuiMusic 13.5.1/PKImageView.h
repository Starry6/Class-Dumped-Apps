@interface PKImageView : UIView
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage addImage;
@property (nonatomic) UIImage mulImage;
- (id)initWithImage:;
- (void)setFrame:;
- (void)setImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)image;
- (id)addImage;
- (void)setupWithDrawing:imageSize:scale:strokeSpaceClipRect:sixChannel:;
- (void)setAddImage:;
- (void)setMulImage:;
- (id)_createLayerWithImage:compositingFiler:;
- (void)_updateImageLayer;
- (void)_updateAddLayer;
- (void)_updateMulLayer;
- (void)_updateLayerFrames;
- (id)mulImage;
@end
