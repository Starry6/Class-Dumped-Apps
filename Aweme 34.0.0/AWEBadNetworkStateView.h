@interface AWEBadNetworkStateView : UIView
@property (nonatomic) YYAnimatedImageView wifiImageView;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) UIButton solutionButton;
@property (nonatomic) BOOL hasSetup;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (void)setupIfNeed;
- (id)wifiImageView;
- (id)solutionButton;
- (void)showSolution;
- (void)_toggleAnimation;
- (void)setWifiImageView:;
- (void)setSolutionButton:;
- (void)_startAnimation;
- (id)init;
- (void)dealloc;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopAnimation;
- (void)setRetryButton:;
- (id)retryButton;
@end
