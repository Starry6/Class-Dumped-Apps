@interface ABUUserAgentHelper : ABUSingleton
@property (nonatomic) WKWebView webview;
@property (nonatomic) NSString ua;
- (void)setUa:;
- (id)ua;
- (id)userAgent;
- (id)init;
- (void).cxx_destruct;
- (id)webview;
- (void)setWebview:;
+ (id)sharedInstance;
@end
