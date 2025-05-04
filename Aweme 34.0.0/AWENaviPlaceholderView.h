@interface AWENaviPlaceholderView : UIView
@property (nonatomic) BDImageView logoImageView;
@property (nonatomic) UIImage logoImage;
@property (nonatomic) NSArray colors;
@property (nonatomic) AWENaviProgressView progressView;
- (void)updateToProgress:duration:;
- (void)updateLogoImage:;
- (id)initWithFrame:logoImage:;
- (id)initWithFrame:logoImage:colors:;
- (void)fetchImageFromService;
- (void)updateLogoSize:;
- (id)initWithFrame:colors:;
- (void)logoSizeScaleAspectFit;
- (void)updateLogoSizeWithFixedWidth:;
- (void)updateLogoSizeWithFixedHeight:;
- (void)updateLogoSize:logoImage:;
- (void)updateToProgress:duration:autoDismiss:;
- (void)setColors:;
- (id)progressView;
- (id)colors;
- (id)initWithFrame:;
- (void)setProgressView:;
- (void).cxx_destruct;
- (id)logoImage;
- (void)setLogoImage:;
- (id)logoImageView;
- (void)setLogoImageView:;
+ (Class)layerClass;
@end
