@interface AWETeenNextActionButton : DUXButton
@property (nonatomic) BOOL breathAnimating;
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) BOOL hasBeenClicked;
@property (nonatomic) BOOL hasShownHintAnim;
@property (nonatomic) NSString successTitle;
@property (nonatomic) NSString normalTitle;
@property (nonatomic) NSString loadingTitle;
@property (nonatomic) BOOL canShowBreathAnimation;
@property (nonatomic) @? tapBlockIncludeDisabled;
@property (nonatomic) BOOL shouldEnlargeBtn;
@property (nonatomic) BOOL shouldShowNewLoading;
@property (nonatomic) BOOL shouldShowNewSmallLoading;
@property (nonatomic) LOTAnimationView hintView;
- (void)setNormalTitle:;
- (id)normalTitle;
- (id)lottieView;
- (void)setLottieView:;
- (void)stopBreathAnimation;
- (void)showBreathAnimation;
- (id)initWithNormalTitle:loadingTitle:;
- (id)loadingAnimation;
- (id)initWithNormalTitle:successTitle:;
- (void)tapBlockIncludeDisabledAction;
- (void)prepareForHintAnimation;
- (BOOL)shouldShowNewLoading;
- (BOOL)shouldShowNewSmallLoading;
- (void)setAlpha:withAnimateCompletion:;
- (void)setHasBeenClicked:;
- (id)tapBlockIncludeDisabled;
- (BOOL)breathAnimating;
- (BOOL)canShowBreathAnimation;
- (void)setBreathAnimating:;
- (BOOL)hasBeenClicked;
- (BOOL)hasShownHintAnim;
- (void)setHasShownHintAnim:;
- (id)initWithNormalTitle:loadingTitle:successTitle:;
- (void)stopLoadingWithError:;
- (void)changeLoadingTitle:;
- (void)setShouldEnlargeBtn:;
- (void)setCanShowBreathAnimation:;
- (void)setTapBlockIncludeDisabled:;
- (BOOL)shouldEnlargeBtn;
- (void)setShouldShowNewLoading:;
- (void)setShouldShowNewSmallLoading:;
- (void)startLoading;
- (id)initWithFrame:;
- (void)setEnabled:;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)reset;
- (void)layoutSubviews;
- (id)hintView;
- (void)setHintView:;
- (void)setSuccessTitle:;
- (id)successTitle;
- (id)loadingTitle;
- (void)setLoadingTitle:;
@end
