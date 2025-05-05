@interface CSJSplashBottomBaseComponentView : UIView
@property (nonatomic) <CSJSplashBottomViewInterface> configuration;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UILabel tipTitleLabel;
@property (nonatomic) CAGradientLayer swipeLayer;
@property (nonatomic) @? actionBlock;
- (id)initWithComponentConfiguration:;
- (void)setSwipeLayer:;
- (void)setTipTitleLabel:;
- (double)splashBottomBlankHeightWithContainerFrame:;
- (id)splashBottomFrameWithContainerFrame:;
- (void)startSplashBottomAnimation;
- (void)stopSplashBottomAnimation;
- (id)swipeLayer;
- (id)tipTitleLabel;
- (id)actionBlock;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
- (void)setActionBlock:;
+ (Class)layerClass;
@end
