@interface AWENovelPopup : BDNovelBasePopup
- (void)toast:iconType:;
- (void)alert:title:message:confirmText:cancelText:disableLandscape:confirmCallBack:cancelCallBack:;
- (void)toast:icon:;
- (void)toast:inView:;
- (id)createLoadingToast:;
- (void)showBubbleWithConfig:;
- (void)showWithText:rightIconView:clickBlock:;
- (void)showWithText:highlightedText:highlightedLabelClickBlock:withArrowIcon:withOffsetY:;
@end
