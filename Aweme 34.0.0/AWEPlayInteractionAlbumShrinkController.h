@interface AWEPlayInteractionAlbumShrinkController : AWEPlayInteractionNewBaseController
- (BOOL)judgeEnable;
- (void)panelDidPresentWithRemainHeight:;
- (void)panelDidPresentWithRemainHeight:animationDuration:;
- (void)panelDismissProgressDidChange:;
- (void)panelDidDismiss;
- (void)panelDidDismissWithAnimationDuration:;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)reset;
@end
