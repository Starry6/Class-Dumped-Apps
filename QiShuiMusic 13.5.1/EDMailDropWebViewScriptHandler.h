@interface EDMailDropWebViewScriptHandler : NSObject
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSString name;
@property (nonatomic) @? handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWebView:;
- (void)setName:;
- (id)webView;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)name;
- (void)userContentController:didReceiveScriptMessage:;
@end
