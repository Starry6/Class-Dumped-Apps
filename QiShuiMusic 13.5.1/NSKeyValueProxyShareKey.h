@interface NSKeyValueProxyShareKey : NSObject
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (id)_proxyLocator;
+ (id)_proxyShare;
@end
