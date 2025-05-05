@interface BDUnifiedWebViewBridgeEngine : TTWebViewBridgeEngine
@property (nonatomic) IWKPiperPluginObject wkJSBObject;
@property (nonatomic) NSObject sourceObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iesBridgeEngine;
- (void)setWkJSBObject:;
- (BOOL)bridgeEngine:externalRespondsToMessage:;
- (BOOL)bridgeEngine:shouldCallbackUnregisteredMessage:;
- (void)fireEvent:msg:params:resultBlock:;
- (void)installOnWKWebView:;
- (void)setSchemaInterceptionEnabled:;
- (void)uninstallFromWKWebView:;
- (id)wkJSBObject;
- (id)sourceURL;
- (void).cxx_destruct;
- (id)sourceObject;
- (void)setSourceObject:;
@end
