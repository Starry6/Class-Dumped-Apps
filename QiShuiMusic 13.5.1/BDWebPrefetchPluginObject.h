@interface BDWebPrefetchPluginObject : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_registerPrefetchBridgeForWebView:;
- (id)webView:loadRequest:;
- (id)webView:didCommitNavigation:;
+ (void)enablePrefetch;
@end
