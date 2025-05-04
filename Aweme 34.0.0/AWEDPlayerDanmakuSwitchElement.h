@interface AWEDPlayerDanmakuSwitchElement : AWEDPlayerInteractionBaseElement
- (void)initializeElement;
- (id)activateInfoWithData:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (void)updateDanmakuSwitch;
@end
