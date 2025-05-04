@interface AWEIMMessageNotice_Screenshot_Plugin : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_setupNoticeIfNeed:;
+ (BOOL)canCreateComponentWithContext:;
@end
