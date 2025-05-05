@interface CSJSplashCoverView : CSJCoverView
@property (nonatomic) UILabel splashClickText;
@property (nonatomic) CSJSplashBottomView bottomMask;
@property (nonatomic) BOOL skipButtonDidTimeout;
- (id)splashClickText;
- (void)_CSJADViewDidVisibleWithNotif:;
- (void)_CSJADViewSkipButtonDidTimeoutWithNotif:;
- (BOOL)needAddBottomMask;
- (id)p_shakeScence;
- (void)pbu_override_buildView;
- (void)pbu_override_buildViewData;
- (void)relayoutBottomMask;
- (void)setSkipButtonDidTimeout:;
- (void)setSplashClickText:;
- (void)showBottomMaskWithAnimation;
- (BOOL)skipButtonDidTimeout;
- (void)startAccelerometer;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bottomMask;
- (void)setBottomMask:;
@end
