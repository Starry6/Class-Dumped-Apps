@interface AWELottiePendantView : AWEPendantView
@property (nonatomic) LOTAnimationView foldedView;
@property (nonatomic) LOTAnimationView expandedView;
- (void)performUpdateFromState:toState:animated:;
- (id)initWithFrame:foldedLottie:expandedLottie:;
- (void)playAnimationWithType:;
- (id)foldedView;
- (id)addLottieViewWithLottie:expanded:;
- (void)switchPlayingLottieViewWithFolded:;
- (void)performFoldingAnimation;
- (void)performExpandingAnimation;
- (void)animateWithDuration:timingFunction:animations:completion:;
- (void)resumePlayAnimation;
- (id)startFrameWithAnimationType:;
- (id)endFrameWithAnimationType:;
- (void)willEnterForeground;
- (void)willMoveToWindow:;
- (void).cxx_destruct;
- (id)expandedView;
@end
