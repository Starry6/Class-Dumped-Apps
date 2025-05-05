@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray
- (void)HMDP_replaceObjectsAtIndexes:withObjects:;
- (void)HMDP_replaceObjectAtIndex:withObject:;
- (void)HMDP_removeObjectAtIndex:;
- (void)HMDP_insertObject:atIndex:;
- (void)HMDP_insertObjects:atIndexes:;
- (void)HMDP_removeObjectsAtIndexes:;
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)removeObjectsAtIndexes:;
- (void)insertObjects:atIndexes:;
- (void)insertObject:atIndex:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (void)addObject:;
- (void)replaceObjectsAtIndexes:withObjects:;
- (void)removeLastObject;
@end
