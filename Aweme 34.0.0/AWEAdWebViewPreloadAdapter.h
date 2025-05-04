@interface AWEAdWebViewPreloadAdapter : HTSService
- (void)onServiceInit;
- (void)setupSlardarWebViewClientMonitor:webView:;
- (id)fetchThirdPreloadWebViewWith:;
- (void)registerUserFeatureDelegate:;
- (void)didReceiveMemoryWarningNotification;
- (void)awemeSettingDidChange;
- (void)feedModelDidDisplay:nextModel:currentIndex:nextIndex:;
- (void)updateFeedVideo:quickSlideStatus:;
- (void)webViewControllerViewDidLoad:requestURL:;
- (void)webViewControllerViewDidDisappear:requestURL:;
- (void)preloadWebViewDidShowed:requestURL:;
- (BOOL)isPreLoadWebViewShowed:requestURL:;
- (void)searchReceiveGeneralSearchModel:;
- (void)searchClearAdInfos;
- (void)searchExit;
- (id)init;
- (void).cxx_destruct;
@end
