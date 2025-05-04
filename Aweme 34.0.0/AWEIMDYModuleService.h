@interface AWEIMDYModuleService : AWEIMModuleService
@property (nonatomic) NSDictionary startIMInfo;
- (void)didFinishLogin;
- (void)startIM;
- (void)recordStartIMInfo:;
- (id)fetchStartIMInfo;
- (BOOL)isNoticePushViewShowing;
- (double)noticePushViewShowDuration;
- (id)getNavigationBarUnreadView;
- (id)getIMNavigationBarUnreadViewWithSceneType:;
- (void)shareVideoAfterPublish:publishModel:enterFrom:;
- (id)faceToFacePanelKeyboardData;
- (id)faceToFacePanelDefaultKeyboardData;
- (BOOL)shouldReportForAPI:;
- (id)pushModel;
- (unsigned long long)landingStrategyWithUrlString:;
- (id)faceToFaceViewConfig;
- (id)faceToFaceDefaultViewConfig;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (id)startIMInfo;
- (void)setStartIMInfo:;
- (id)officialChatTitle;
- (void)p_showOnlinePrivacyPopupView:useCardUIStyle:;
- (void).cxx_destruct;
+ (id)sharedIntance;
+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
@end
