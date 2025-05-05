@interface AKIDPHandler : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) AKServerRequestConfiguration configuration;
@property (nonatomic) <AKIDPHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completion;
- (void)setCompletion:;
- (void)cancel;
- (void)webView:didFinishNavigation:;
- (void)setDelegate:;
- (id)configuration;
- (id)delegate;
- (void)webView:didReceiveAuthenticationChallenge:completionHandler:;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (id)_sanitizeError:;
- (void)webView:didFailNavigation:withError:;
- (id)initWithConfiguration:withCompletionHandler:;
- (id)_safeACSDictionaryFromResult:;
- (id)_samlJavaScriptQuery;
- (void)_completeWithACSPostRequestFromWebView:;
- (void)_completeFlowWithError:;
@end
