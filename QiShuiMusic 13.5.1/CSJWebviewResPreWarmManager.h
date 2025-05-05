@interface CSJWebviewResPreWarmManager : NSObject
@property (nonatomic) CSJWKWebViewClient webView;
@property (nonatomic) NSMutableArray webViewArray;
@property (nonatomic) q maxWebviewCount;
@property (nonatomic) NSMutableArray didPreWarmUrlStrArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)maxWebviewCount;
- (id)didPreWarmUrlStrArray;
- (void)preWarmLandingPageResWithMeta:;
- (void)preWarmResWithModel:urlStr:;
- (void)safeRemoveWebview:;
- (void)setDidPreWarmUrlStrArray:;
- (void)setMaxWebviewCount:;
- (void)setWebViewArray:;
- (id)webViewArray;
- (void)setWebView:;
- (id)init;
- (id)webView;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:;
- (void)webView:didFailLoadWithError:;
- (void)webViewDidStartLoad:;
- (void)webViewDidFinishLoad:;
+ (id)sharedInstance;
@end
