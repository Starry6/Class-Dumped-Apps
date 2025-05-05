@interface IESECLLDCImageView : UIView
@property (nonatomic) IESECUIImageView imageView;
@property (nonatomic) LOTAnimationView lottieView;
- (id)lottieView;
- (void)setLottieView:;
- (void)updateWithImageModel:;
- (void)updateWithURLModel:tintColor:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setContentMode:;
- (void)setImageView:;
- (void)setupUI;
@end
