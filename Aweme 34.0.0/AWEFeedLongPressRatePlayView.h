@interface AWEFeedLongPressRatePlayView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) LOTAnimationView playRateLottieView;
@property (nonatomic) UILabel rateDescLabel;
- (void)setUI;
- (id)rateDescLabel;
- (id)playRateLottieView;
- (id)initWithRateValue:;
- (void)showRatePlayLottieOnView:;
- (void)hiddeRatePlayLottie;
- (void)updateRVUIWithTopOffset:rateTitle:;
- (void)setPlayRateLottieView:;
- (void)setRateDescLabel:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
