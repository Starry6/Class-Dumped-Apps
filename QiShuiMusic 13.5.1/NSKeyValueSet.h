@interface NSKeyValueSet : NSSet
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (id)_proxyLocator;
- (id)member:;
- (id)objectEnumerator;
- (unsigned long long)count;
+ (id)_proxyShare;
@end
