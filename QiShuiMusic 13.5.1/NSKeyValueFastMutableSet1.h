@interface NSKeyValueFastMutableSet1 : NSKeyValueFastMutableSet
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (id)member:;
- (id)objectEnumerator;
- (unsigned long long)count;
@end
