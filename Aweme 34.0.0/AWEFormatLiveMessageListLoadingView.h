@interface AWEFormatLiveMessageListLoadingView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) BOOL didStopAnimation;
- (id)createDotView;
- (void)setDidStopAnimation:;
- (void)_doAnimation;
- (BOOL)didStopAnimation;
- (void)animateView:duration:completion:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setupView;
@end
