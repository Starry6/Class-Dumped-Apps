@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (id)member:;
- (id)objectEnumerator;
- (unsigned long long)count;
- (id)_nonNilSetValueWithSelector:;
@end
