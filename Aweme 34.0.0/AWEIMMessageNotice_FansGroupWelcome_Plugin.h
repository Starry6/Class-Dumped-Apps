@interface AWEIMMessageNotice_FansGroupWelcome_Plugin : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)p_didClickWelcome;
- (void)p_trackEnterWelcomeEvent;
+ (BOOL)canCreateComponentWithContext:;
@end
