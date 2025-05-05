@interface SFWebExtension : WBSWebExtensionData
@property (nonatomic) WKWebViewConfiguration extensionWebViewConfiguration;
@property (nonatomic) BOOL isDevelopmentBuild;
- (void)_validateToolbarItemInAllWindows;
- (void)_loadToolbarItem;
- (void)_unloadToolbarItem;
- (BOOL)_applicationIsActive;
- (id)webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:;
- (void).cxx_destruct;
- (BOOL)canLoadWithErrorString:;
- (void)userGesturePerformedInTab:;
- (id)defaultWebsiteDataStore;
- (id)_backgroundWebViewConfiguration;
- (id)extensionWebViewConfiguration;
- (void)checkPermissionAndPromptIfNecessaryToAccessURLs:inTab:options:callingAPIName:completionHandler:;
- (void)_showAccessRequestDialogForPendingRequestsAndAdditionalURLs:additionalCallingAPIName:performingUserGestureInTab:completionHandler:;
- (id)_updateLastInteractionDate;
- (id)_lastInteractionDate;
- (void)_hidePermissionBanner;
- (BOOL)_canShowBanner;
- (void)showOrHidePermissionRequestBannerIfNeeded;
- (void)permissionRequestBannerWasDismissed;
- (void)showAlertForPendingPermissionRequests;
- (void)requestPermissionsFromToolbarItemInTab:completionHandler:;
- (void)_compileDeclarativeNetRequestRules:completionHandler:;
- (BOOL)isDevelopmentBuild;
@end
