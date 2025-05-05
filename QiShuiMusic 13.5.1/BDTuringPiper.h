@interface BDTuringPiper : NSObject
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSMutableDictionary webOnCommands;
@property (nonatomic) NSMutableDictionary nativeOnCommands;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)call:msg:params:completion:;
- (void)callNative:command:;
- (id)nativeOnCommandForPiperName:;
- (id)nativeOnCommands;
- (void)on:callback:;
- (void)setNativeOnCommands:;
- (void)setWebOnCommands:;
- (id)webOnCommands;
- (BOOL)webOnPiper:;
- (void)setWebView:;
- (id)webView;
- (id)initWithWebView:;
- (void).cxx_destruct;
- (void)userContentController:didReceiveScriptMessage:;
@end
