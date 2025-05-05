@interface CJPayBridgePlugin_requestWXH5Payment : TTBridgePlugin
@property (nonatomic) WKWebView webView;
@property (nonatomic) @? bridgeCallback;
@property (nonatomic) TTBridgeCommand command;
@property (nonatomic) BOOL hasOpenWXSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestWXH5PaymentWithParam:callback:engine:controller:command:;
- (BOOL)hasOpenWXSchema;
- (id)bridgeCallback;
- (void)p_delayDetectWXOpenStatus;
- (void)setBridgeCallback:;
- (void)setHasOpenWXSchema:;
- (void)setWebView:;
- (void)dealloc;
- (id)webView;
- (id)command;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)setCommand:;
- (void)webView:didFailNavigation:withError:;
+ (void)registerBridge;
@end
