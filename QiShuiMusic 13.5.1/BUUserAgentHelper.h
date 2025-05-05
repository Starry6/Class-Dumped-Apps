@interface BUUserAgentHelper : NSObject
@property (nonatomic) WKWebView webview;
@property (nonatomic) NSString ua;
@property (nonatomic) BOOL updatedUa;
- (void)setUa:;
- (void)setUpdatedUa:;
- (id)ua;
- (BOOL)updatedUa;
- (id)userAgent;
- (void)_update;
- (id)init;
- (void).cxx_destruct;
- (id)webview;
- (void)setWebview:;
+ (id)sharedInstance;
@end
