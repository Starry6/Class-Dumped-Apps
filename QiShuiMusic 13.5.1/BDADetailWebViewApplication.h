@interface BDADetailWebViewApplication : NSObject
+ (void)fireEvent:data:withWebView:;
+ (void)handleBridgeMessage:engine:completionHandler:;
+ (BOOL)handleRequest:withWebView:viewController:;
+ (void)invokeJSBCallbackWithCommand:msg:data:webView:;
+ (void)registeJSBAlias:for:;
+ (id)sharedInstance;
@end
