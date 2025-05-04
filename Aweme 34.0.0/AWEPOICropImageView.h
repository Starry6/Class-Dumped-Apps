@interface AWEPOICropImageView : UIImageView
@property (nonatomic) double imageWidth;
- (void)addLeftCropWithRadius:centerPadding:;
- (void)addRightCropWithRadius:centerPadding:;
- (double)imageWidth;
- (void)setImageWidth:;
@end
