@interface AWEDCFeedShimmerView : UIView
@property (nonatomic) CAGradientLayer maskLayer;
@property (nonatomic) BOOL shimmering;
@property (nonatomic) AWEDCFeedShimmerViewUIConfig uiConfig;
@property (nonatomic) q shimmerDirection;
- (id)uiConfig;
- (void)startShimming;
- (void)stopShimming;
- (void)setUiConfig:;
- (void)setupDefaultUIConfig;
- (BOOL)shimmering;
- (void)setShimmering:;
- (void)beginShimmering;
- (void)endShimmering;
- (void)updateMaskColors;
- (void)updateMaskLayout;
- (long long)shimmerDirection;
- (void)createMaskIfNeeded;
- (id)createSliderAnimation;
- (void)configWithUIConfig:;
- (void)setShimmerDirection:;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setMaskLayer:;
@end
