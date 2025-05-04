@interface AWEIMPushGuideBannerView : AWEIMMessageTabLeftTextRightIconBannerView
@property (nonatomic) Q style;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) <AWEIMPushGuideBannerViewDelegate> delegate;
- (void)p_didBecomeActive;
- (void)refreshBannerViewWithModel:;
- (id)initWithFrame:pushGuideStyle:;
- (void)setupBannerView;
- (void)onClickBannerView;
- (void)pushGuideBannerViewOnClockClose;
- (id)delegate;
- (id)blurView;
- (void)setBlurView:;
- (void)setFrame:;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setStyle:;
@end
