@interface AWEIMMessageLightInteractionReplyComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (id)emojiImageNameWithKey:;
- (void)p_trackRelpyButtonShow;
- (void)p_didTapReplyButton;
- (void)p_updateUIIfNeeded:service:;
+ (BOOL)canCreateComponentWithContext:;
@end
