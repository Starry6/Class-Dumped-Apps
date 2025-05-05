@interface BDWebSSLPlugin : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)webView:didReceiveAuthenticationChallenge:completionHandler:;
@end
