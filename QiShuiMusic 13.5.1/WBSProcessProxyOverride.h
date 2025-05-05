@interface WBSProcessProxyOverride : NSObject
+ (void)overrideSystemHTTPProxy:HTTPSProxy:;
+ (void)overrideSystemProxiesIfNeeded:;
@end
