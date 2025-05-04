@interface AWEIMMessageNewComerReportComponent : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_updateWelcomeUI;
- (void)p_updateWelcomeLabelUI;
- (void)p_didTapAvatar;
- (void)p_didTapWelcome;
- (void)p_setupVKO;
- (id)p_viewModel;
+ (BOOL)canCreateComponentWithContext:;
@end
