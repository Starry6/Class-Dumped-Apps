@interface NSKeyValueProxyGetter : NSKeyValueGetter
- (id)initWithContainerClassID:key:proxyClass:;
- (Class)proxyClass;
@end
