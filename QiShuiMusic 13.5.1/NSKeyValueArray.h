@interface NSKeyValueArray : NSArray
- (id)HMDP_objectAtIndex:;
- (id)HMDP_objectsAtIndexes:;
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)getObjects:range:;
- (void)dealloc;
- (id)objectsAtIndexes:;
- (id)_proxyLocator;
- (id)objectAtIndex:;
- (unsigned long long)count;
+ (id)_proxyShare;
@end
