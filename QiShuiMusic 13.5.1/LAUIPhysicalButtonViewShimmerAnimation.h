@interface LAUIPhysicalButtonViewShimmerAnimation : LAUIPhysicalButtonViewAnimation
- (void).cxx_destruct;
- (double)duration;
- (void)beginWithDelay:;
- (void)endImmediately;
- (BOOL)_isReducedMotionEnabled;
- (void)_beginReducedMotionAnimationWithDelay:;
- (void)_beginRegularMotionAnimationWithDelay:;
- (void)_endShimmerAnimation;
@end
