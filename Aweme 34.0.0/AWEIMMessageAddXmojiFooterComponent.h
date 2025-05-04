@interface AWEIMMessageAddXmojiFooterComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_didClickButton;
- (void)p_trackFooterShow;
+ (BOOL)canCreateComponentWithContext:;
@end
