@interface MQPWebView : WKWebView
- (id)currentRequest;
- (void)evaluateJavaScript:completionHandler:;
@end
