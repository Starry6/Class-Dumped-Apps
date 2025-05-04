@interface AWELightTransition : AWEPageSheetTransition
@property (nonatomic) <AWELightTransitionAnimationDelegate> lightDelegate;
- (id)lightDelegate;
- (void)setLightDelegate:;
- (void)animateTransition:;
- (void).cxx_destruct;
- (void)animationEnded:;
@end
