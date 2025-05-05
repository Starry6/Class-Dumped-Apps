@interface CSJSplashShakeComponentView : CSJSplashBottomBaseComponentView
@property (nonatomic) UIView circleBackgroundView;
@property (nonatomic) UIImageView shakeImageView;
@property (nonatomic) Q layoutType;
@property (nonatomic) CSJAdInfoViewModel infoViewModel;
- (id)initWithComponentConfiguration:;
- (void)_onTapGR;
- (id)infoViewModel;
- (id)initWithComponentConfiguration:layoutType:;
- (void)setInfoViewModel:;
- (void)setShakeImageView:;
- (id)shakeImageView;
- (id)splashBottomFrameWithContainerFrame:;
- (void)startSplashBottomAnimation;
- (unsigned long long)layoutType;
- (void)setLayoutType:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setupUI;
- (id)circleBackgroundView;
- (void)setCircleBackgroundView:;
@end
