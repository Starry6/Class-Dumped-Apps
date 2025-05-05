@interface NSKeyValueOrderedSet : NSOrderedSet
- (id)HMDP_objectAtIndex:;
- (id)HMDP_objectsAtIndexes:;
- (void)HMDP_getObjects:range:;
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)getObjects:range:;
- (void)dealloc;
- (id)objectsAtIndexes:;
- (id)_proxyLocator;
- (unsigned long long)indexOfObject:;
- (id)objectAtIndex:;
- (unsigned long long)count;
+ (id)_proxyShare;
@end
