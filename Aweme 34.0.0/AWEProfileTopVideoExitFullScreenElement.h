@interface AWEProfileTopVideoExitFullScreenElement : AWEDPlayerInteractionBaseElement
- (id)activateInfoWithData:;
- (void)willRotateToFullScreen:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (void)clickToRotateGeneralPlayer;
@end
