@interface BDWebViewTemplatePlugin : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)webView:didFinishNavigation:;
- (id)webViewWebContentProcessDidTerminate:;
- (id)webView:didFailNavigation:withError:;
@end
