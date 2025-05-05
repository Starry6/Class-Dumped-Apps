@interface BDWebViewPluginMonitorInternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)plugin:didInterceptWebView:lifecycle:flowType:start:end:;
+ (id)shareInstance;
@end
