@interface CJPayWEH5Channel : CJPayBasicChannel
@property (nonatomic) WKWebView webView;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowLoading:;
- (void)appDidInForeground;
- (BOOL)canProcessWithURL:;
- (void)exeCompletionBlock:resultType:errCode:;
- (BOOL)p_isWXAppInstalled;
- (void)payActionWithDataDict:completionBlock:;
- (void)setWakingApp:;
- (BOOL)wakingApp;
- (void)setWebView:;
- (id)init;
- (void)dealloc;
- (id)webView;
- (void)setStartTime:;
- (double)startTime;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (BOOL)showLoading;
+ (void)registerPlugin;
@end
