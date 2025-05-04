@interface AWEIMMessageNoticeCardComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_cardDidTapped;
+ (BOOL)canCreateComponentWithContext:;
@end
