@interface AWEBadNetworkStateView : UIView
@property (nonatomic) YYAnimatedImageView wifiImageView;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) UIButton solutionButton;
@property (nonatomic) BOOL hasSetup;
- (void)_toggleAnimation;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (void)setSolutionButton:;
- (void)setWifiImageView:;
- (void)setupIfNeed;
- (void)showSolution;
- (id)solutionButton;
- (id)wifiImageView;
- (void)_startAnimation;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)retryButton;
- (void)setRetryButton:;
@end
