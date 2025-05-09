@interface TTWebViewBridgeEngine : NSObject
@property (nonatomic) TTBridgeRegister bridgeRegister;
@property (nonatomic) UIViewController sourceController;
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSObject sourceObject;
@property (nonatomic) <TTBridgeAuthorization> authorization;
@property (nonatomic) WKWebView wkWebView;
@property (nonatomic) BOOL schemaInterceptionEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeRegister;
- (void)callbackBridge:msg:params:resultBlock:;
- (void)callbackBridge:params:;
- (void)callbackBridge:params:resultBlock:;
- (void)fireEvent:msg:params:;
- (void)fireEvent:msg:params:resultBlock:;
- (void)fireEvent:params:;
- (void)fireEvent:params:resultBlock:;
- (void)installOnWKWebView:;
- (BOOL)respondsToCommand:;
- (BOOL)schemaInterceptionEnabled;
- (void)setBridgeRegister:;
- (void)setSchemaInterceptionEnabled:;
- (void)uninstallFromWKWebView:;
- (id)wkWebView;
- (id)authorization;
- (id)sourceController;
- (id)init;
- (void)dealloc;
- (id)sourceURL;
- (void)setAuthorization:;
- (id)initWithAuthorization:;
- (long long)engineType;
- (void).cxx_destruct;
- (id)sourceObject;
- (void)evaluateJavaScript:completionHandler:;
+ (id)correctTopViewControllerFor:;
+ (void)postEventNotification:msg:params:resultBlock:;
+ (void)postEventNotification:params:;
+ (id)webViewEngines;
@end
