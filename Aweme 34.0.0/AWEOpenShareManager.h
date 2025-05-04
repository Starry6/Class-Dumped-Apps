@interface AWEOpenShareManager : NSObject
@property (nonatomic) DUXLoadingToast loadingView;
@property (nonatomic) <AWEOpenShareDelegate> delegate;
- (void)hideLoadingViewAnimated:;
- (void)authorizeWithConsumerOAuthReq:userInfo:completion:;
- (void)handleAwemeShareWithDict:;
- (void)handleAwemeShareFromSystemExtension:;
- (void)reportCardMonitorWith:resp:;
- (void)jumpToContactWithOpenId:targetOpenId:clientKey:completionResp:completion:;
- (void)jumpToAlbumWithResp:completion:;
- (void)jumpToProfileWithOpenId:targetOpenId:clientKey:extraParams:completionResp:completion:;
- (BOOL)checkDouyinVersionValidToMiniVersion:;
- (BOOL)shouldCheckScope:;
- (id)generateCheckScopesArrayWithOauthReq:;
- (void)handleCheckPermissionResultToResp:ToDict:withCheckResult:;
- (BOOL)useNewIMProcess:method:;
- (void)addShareMonitor:resp:;
- (void)updateMediaResourcesAndTypeWithResp:locations:completion:;
- (void)updateOpenPlatformShareToTypeWithResp:isAwemeSource:isShareToStory:;
- (void)didEnterAwemeFromThridAppShareWithThridAppKey:shareParam:;
- (void)addCardMonitor:resp:;
- (BOOL)supportAnchorType:;
- (id)delegate;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)showLoadingView;
@end
