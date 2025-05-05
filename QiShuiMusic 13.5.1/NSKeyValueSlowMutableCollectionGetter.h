@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter
- (void)dealloc;
- (id)baseGetter;
- (id)baseSetter;
- (BOOL)treatNilValuesLikeEmptyCollections;
- (id)initWithContainerClassID:key:baseGetter:baseSetter:containerIsa:proxyClass:;
@end
