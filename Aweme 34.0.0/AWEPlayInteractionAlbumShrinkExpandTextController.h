@interface AWEPlayInteractionAlbumShrinkExpandTextController : AWEPlayInteractionNewBaseController
- (BOOL)judgeEnable;
- (BOOL)needInitialExpand;
- (double)calculateExpendTextHeightLimit;
- (BOOL)canTapControlPlayState;
- (BOOL)canPinchToPureMode;
- (BOOL)canPinchToSquare;
- (BOOL)canPresentLongPressPanel;
- (BOOL)canLongPressFastSpeed;
- (BOOL)canShowPauseIcon;
- (void)panelDidPresentWithRemainHeight:;
- (void)panelDidPresentWithRemainHeight:animationDuration:;
- (void)panelDismissProgressDidChange:;
- (void)panelDidDismiss;
- (void)panelDidDismissWithAnimationDuration:;
- (id)init;
- (void)viewDidLoad;
- (void)reset;
@end
