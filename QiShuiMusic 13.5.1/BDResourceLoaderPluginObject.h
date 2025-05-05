@interface BDResourceLoaderPluginObject : IWKPluginObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)webView:didInitWithFrame:configuration:;
+ (void)setup;
@end
