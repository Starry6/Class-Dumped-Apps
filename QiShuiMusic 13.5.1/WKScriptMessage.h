@interface WKScriptMessage : NSObject
@property (nonatomic) @ body;
@property (nonatomic) WKWebView webView;
@property (nonatomic) WKFrameInfo frameInfo;
@property (nonatomic) NSString name;
@property (nonatomic) WKContentWorld world;
- (id)fetchBodyContentWithBody:;
- (id)fix_scriptMessageBody:webView:frameInfo:name:;
- (id)fix_scriptMessageBody:webView:frameInfo:name:world:;
- (id)webView;
- (id)world;
- (id)body;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (id)frameInfo;
- (id)_initWithBody:webView:frameInfo:name:world:;
+ (void)tryFixWKScriptMessageCrash;
@end
