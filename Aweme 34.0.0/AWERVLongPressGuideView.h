@interface AWERVLongPressGuideView : UIView
@property (nonatomic) LOTAnimationView longPressLottieView;
@property (nonatomic) UILabel guideLabel;
- (id)guideLabel;
- (void)setGuideLabel:;
- (void)showGuideOnView:;
- (void)hideGuideIfNeed;
- (id)longPressLottieView;
- (void)resetLongPressGuide;
- (void)setupLongPressLottieView;
- (void)setLongPressLottieView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
