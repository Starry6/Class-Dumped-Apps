@interface BDTouTiaoWebViewBridgeEngine : TTWebViewBridgeEngine
@property (nonatomic) NSObject sourceObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)decodeBase64String:;
- (void)fireEvent:msg:params:resultBlock:;
- (void)installOnWKWebView:;
- (void)uninstallFromWKWebView:;
- (void)dealloc;
- (id)sourceURL;
- (void).cxx_destruct;
- (id)sourceObject;
- (void)userContentController:didReceiveScriptMessage:;
- (void)setSourceObject:;
+ (void)_call:method:params:;
@end
