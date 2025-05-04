@interface AWEWebViewJsBridgeRegister : NSObject
+ (void)registerJSBridgeHandler;
+ (id)openJSBListCache;
+ (void)_fetchAuthIfNeededWithParams:bridge:callbackId:;
+ (id)findWebViewController:;
@end
