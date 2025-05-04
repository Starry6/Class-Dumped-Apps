@interface AWEDPlayerSpeedElement : AWEDPlayerInteractionBaseElement
- (void)player:didChangePlaybackRate:;
- (id)activateInfoWithData:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:;
- (void)updatePlaySpeed;
@end
