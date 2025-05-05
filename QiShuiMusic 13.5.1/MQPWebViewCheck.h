@interface MQPWebViewCheck : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) MQPWebView webview;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkUrlShouldRenderInWebview:withBlock:;
- (void)postCheckRequestByJS:;
- (void)removeWebView;
- (void)setCompletionBlock:;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)webView:decidePolicyForNavigationResponse:decisionHandler:;
- (id)completionBlock;
- (id)webview;
- (void)setWebview:;
+ (id)shared;
@end
