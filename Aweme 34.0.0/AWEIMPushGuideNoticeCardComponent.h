@interface AWEIMPushGuideNoticeCardComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (id)p_iconImageWithURL:;
- (void)p_adaptNoticeBackground;
- (id)displayMessage;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
