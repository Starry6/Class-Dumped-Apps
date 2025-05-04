@interface AWEPlayInteractionAnimationDowngradeController : AWEPlayInteractionBaseController
- (void)scrollViewWillBeginDragging:;
- (BOOL)enabled;
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
@end
