@interface LAUIPhysicalButtonViewBounceAnimation : LAUIPhysicalButtonViewAnimation
- (void)update;
- (double)duration;
- (double)_currentLength;
- (void)beginWithDelay:;
- (void)_animateWithLength:delay:;
@end
