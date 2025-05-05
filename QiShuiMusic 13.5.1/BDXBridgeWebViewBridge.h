@interface BDXBridgeWebViewBridge : NSObject
@property (nonatomic) BDXBridgeWebViewPluginObject webviewPlugin;
@property (nonatomic) WKWebView webView;
@property (nonatomic) <BDXBridgeEngineCallMessageHandler> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)JSCallHandlerNames;
- (void)callbackWithCalledMessage:param:resultBlock:;
- (void)fireEvent:params:resultBlock:;
- (void)flushBridgeMessages;
- (void)handleScriptMessage:withInterceptionPlugin:;
- (id)injectionJsScript;
- (void)setWebviewPlugin:;
- (BOOL)shouldHandleIFrameScheme:withHost:withInterceptionPlugin:;
- (id)webviewPlugin;
- (void)setWebView:;
- (id)supportedProtocols;
- (void)dealloc;
- (id)webView;
- (id)messageHandler;
- (id)initWithWebView:;
- (void).cxx_destruct;
- (void)setMessageHandler:;
+ (id)bridgeScriptWithProtocol:;
@end
