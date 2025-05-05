@interface TCWebViewLoadJs : NSObject
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSString key;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString appId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadJS:openId:andKey:;
- (id)openId;
- (void)setOpenId:;
- (void)setWebView:;
- (void)dealloc;
- (id)appId;
- (void)webView:didFinishNavigation:;
- (id)webView;
- (id)key;
- (void)setAppId:;
- (void)setKey:;
- (void)webView:decidePolicyForNavigationAction:decisionHandler:;
- (void).cxx_destruct;
- (void)webView:didStartProvisionalNavigation:;
- (void)webView:didFailNavigation:withError:;
+ (void)clear;
+ (id)getInstance;
@end
