@interface CJPiper : NSObject
@property (nonatomic) IESBridgeEngine_Deprecated deprecatedBridgeEngine;
@property (nonatomic) NSMutableDictionary callbackHandlers;
@property (nonatomic) WKWebView webView;
- (id)callbackHandlers;
- (id)deprecatedBridgeEngine;
- (void)processIFrameMessage:;
- (void)setCallbackHandlers:;
- (void)setDeprecatedBridgeEngine:;
- (void)setWebView:;
- (id)webView;
- (id)initWithWebView:;
- (void).cxx_destruct;
- (void)flushMessages;
@end
