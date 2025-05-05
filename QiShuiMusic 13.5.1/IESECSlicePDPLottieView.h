@interface IESECSlicePDPLottieView : IESECSliceXViewElementView
@property (nonatomic) UIImageView image;
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) IESECSlicePDPLottieConfig config;
@property (nonatomic) NSString staticImageURL;
@property (nonatomic) BOOL animating;
- (void)setupLottieView;
- (void)animateLottie;
- (void)disAnimatedLottie;
- (void)initConfig:;
- (id)lottieView;
- (void)setLottieView:;
- (void)setStaticImageURL:;
- (BOOL)updateWithSliceXElement:error:;
- (void)setAnimating:;
- (void)layoutSubviews;
- (void)setConfig:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)config;
- (id)image;
- (BOOL)animating;
- (id)staticImageURL;
@end
