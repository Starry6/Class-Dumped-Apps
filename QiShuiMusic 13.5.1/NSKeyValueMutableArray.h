@interface NSKeyValueMutableArray : NSMutableArray
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (id)_proxyLocator;
- (void)setArray:;
+ (id)_proxyShare;
@end
