@interface AWEIMShareLiveCardTopTipView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEGradientView livingLottieGradientView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) LOTAnimationView livingLottieView;
- (void)__setupUI;
- (void)__updateUIWithViewModel:;
- (id)livingLottieGradientView;
- (id)livingLottieView;
- (void)__updateDefaultUIWithViewModel:;
- (void)setLivingLottieGradientView:;
- (void)setLivingLottieView:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)updateWithViewModel:;
@end
