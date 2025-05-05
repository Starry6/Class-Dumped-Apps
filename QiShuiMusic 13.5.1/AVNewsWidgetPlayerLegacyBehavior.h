@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior
@property (nonatomic) <AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate;
- (void).cxx_destruct;
- (id)playerForContentTransitionType:;
- (void)willBeginContentTransition;
- (void)didUpdateContentTransitionProgress:;
- (void)willCompleteContentTransition;
- (void)didCompleteContentTransition;
- (void)willCancelContentTransition;
- (void)didCancelContentTransition;
- (id)legacyDelegate;
- (void)setLegacyDelegate:;
@end
