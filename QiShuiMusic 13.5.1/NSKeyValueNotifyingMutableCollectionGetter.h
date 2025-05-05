@interface NSKeyValueNotifyingMutableCollectionGetter : NSKeyValueProxyGetter
- (void)dealloc;
- (id)mutableCollectionGetter;
- (id)initWithContainerClassID:key:mutableCollectionGetter:proxyClass:;
@end
