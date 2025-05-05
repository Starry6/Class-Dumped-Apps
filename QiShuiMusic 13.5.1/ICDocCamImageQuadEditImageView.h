@interface ICDocCamImageQuadEditImageView : UIView
@property (nonatomic) CALayer imageLayer;
@property (nonatomic) UIImage image;
@property (nonatomic) q orientation;
@property (nonatomic) double imageOpacity;
- (void)setFrame:;
- (BOOL)accessibilityIgnoresInvertColors;
- (long long)orientation;
- (void)setImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)image;
- (void)setOrientation:;
- (id)imageLayer;
- (void)setImageLayer:;
- (void)setImageOpacity:;
- (void)setImage:orientation:;
- (double)imageOpacity;
@end
