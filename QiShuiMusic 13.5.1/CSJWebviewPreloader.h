@interface CSJWebviewPreloader : NSObject
@property (nonatomic) NSMutableArray webviewWrapArray;
@property (nonatomic) q maxPreloadCount;
- (long long)maxPreloadCount;
- (void)preloadWebviewWithRequestURL:;
- (void)setMaxPreloadCount:;
- (void)setWebviewWrapArray:;
- (id)webViewWithRequestURL:;
- (id)webviewWrapArray;
- (id)init;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:;
- (void)webView:didFailLoadWithError:;
- (void)webViewDidStartLoad:;
- (void)webViewDidFinishLoad:;
+ (id)sharedInstance;
@end
