@interface AWEMVChannelShimmerView : UIView
@property (nonatomic) CAGradientLayer maskLayer;
@property (nonatomic) BOOL shimmering;
@property (nonatomic) double animationAlphaLight;
@property (nonatomic) double animationAlphaDark;
@property (nonatomic) q shimmerDirection;
- (void)startShimming;
- (void)stopShimming;
- (double)animationAlphaDark;
- (void)setAnimationAlphaDark:;
- (double)animationAlphaLight;
- (void)setAnimationAlphaLight:;
- (BOOL)shimmering;
- (void)setShimmering:;
- (void)beginShimmering;
- (void)endShimmering;
- (void)updateMaskColors;
- (void)updateMaskLayout;
- (long long)shimmerDirection;
- (void)createMaskIfNeeded;
- (id)createSliderAnimation;
- (void)setShimmerDirection:;
- (id)initWithAnimationAlphaLight:animationAlphaDark:;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setMaskLayer:;
@end
