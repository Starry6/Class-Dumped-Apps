@interface AWEIMDYModuleService : AWEIMModuleService
- (void)startIM;
- (void)clearNoticePushWithType:;
- (void)didFinishLogin;
- (id)getNavigationBarUnreadView;
- (void)hideLiveInnerPushView;
- (Class)imRootClassViewControllerClass;
- (BOOL)isNoticePushViewShowing;
- (unsigned long long)landingStrategyWithUrlString:;
- (double)noticePushViewShowDuration;
- (id)officialChatTitle;
- (BOOL)p_shouldShowOnlinePrivacyPopupView;
- (void)p_showOnlinePrivacyPopupView:;
- (void)shareVideoAfterPublish:publishModel:enterFrom:;
@end
