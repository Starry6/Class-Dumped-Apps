@interface BDNativeLiveVideoComponentPlugin : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)check:withURL:;
- (void)enableNative:;
- (id)webView:decidePolicyForNavigationAction:decisionHandler:;
- (long long)priority;
@end
