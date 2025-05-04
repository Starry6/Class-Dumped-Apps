@interface AWEIMMessageGiphyQuickReplyComponent : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (void)p_updateUIIfNeeded:;
- (void)p_trackRelpyButtonShow;
- (void)p_didTapReplyButton;
+ (BOOL)canCreateComponentWithContext:;
@end
