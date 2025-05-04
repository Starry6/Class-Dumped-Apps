@interface AWERecycledWorksShimmerViewColor : NSObject
@property (nonatomic) UIColor darkColor;
@property (nonatomic) double darkShimmerAnimationAlpha;
@property (nonatomic) UIColor lightColor;
@property (nonatomic) double lightShimmerAnimationAlpha;
- (void)setDarkShimmerAnimationAlpha:;
- (void)setLightShimmerAnimationAlpha:;
- (double)darkShimmerAnimationAlpha;
- (double)lightShimmerAnimationAlpha;
- (id)lightColor;
- (void).cxx_destruct;
- (id)darkColor;
- (void)setDarkColor:;
- (void)setLightColor:;
@end
