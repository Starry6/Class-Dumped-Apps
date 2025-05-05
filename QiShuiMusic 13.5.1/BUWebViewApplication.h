@interface BUWebViewApplication : NSObject
+ (void)fireEvent:data:withWebView:;
+ (void)fireEvent:data:withWebView:completion:;
+ (BOOL)handleRequest:withWebView:viewController:;
+ (void)invokeJSBCallbackWithCommand:msg:data:webView:;
+ (void)registeJSBAlias:for:;
+ (id)sharedInstance;
@end
