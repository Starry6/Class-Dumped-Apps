@interface CSJSplashUpSwipeComponentView : CSJSplashBottomBaseComponentView
@property (nonatomic) UIView baseView;
- (id)initWithComponentConfiguration:;
- (void)_onPanGR:;
- (void)_setupPropertyWithAnimation:;
- (id)splashBottomFrameWithContainerFrame:;
- (void)startSplashBottomAnimation;
- (void)updateFrameIfNeed;
- (void)updateFrameWithBaseView:;
- (void)layoutSubviews;
- (id)baseView;
- (void).cxx_destruct;
- (void)setBaseView:;
- (void)_setupUI;
@end
