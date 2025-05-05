@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet
- (id)HMDP_objectAtIndex:;
- (id)HMDP_objectsAtIndexes:;
- (void)HMDP_getObjects:range:;
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)getObjects:range:;
- (id)objectsAtIndexes:;
- (unsigned long long)indexOfObject:;
- (id)objectAtIndex:;
- (unsigned long long)count;
- (id)_nonNilOrderedSetValueWithSelector:;
@end
