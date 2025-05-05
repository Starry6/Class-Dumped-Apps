@interface NSKeyValueMutableOrderedSet : NSMutableOrderedSet
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (id)_proxyLocator;
+ (id)_proxyShare;
@end
