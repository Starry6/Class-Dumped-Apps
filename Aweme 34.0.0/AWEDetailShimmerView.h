@interface AWEDetailShimmerView : UIView
@property (nonatomic) CAGradientLayer maskLayer;
@property (nonatomic) BOOL shimmering;
@property (nonatomic) q shimmerDirection;
@property (nonatomic) AWEDetailShimmerViewColor color;
- (void)startShimming;
- (void)stopShimming;
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
- (id)color;
- (id)initWithFrame:;
- (void)setColor:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)setMaskLayer:;
@end
