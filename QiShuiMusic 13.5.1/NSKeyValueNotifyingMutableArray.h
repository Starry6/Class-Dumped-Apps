@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray
- (void)HMDP_replaceObjectsAtIndexes:withObjects:;
- (void)HMDP_replaceObjectAtIndex:withObject:;
- (void)HMDP_removeObjectAtIndex:;
- (void)HMDP_insertObject:atIndex:;
- (void)HMDP_insertObjects:atIndexes:;
- (void)HMDP_removeObjectsAtIndexes:;
- (id)HMDP_objectAtIndex:;
- (id)HMDP_objectsAtIndexes:;
- (id)_proxyInitWithContainer:getter:;
- (void)_proxyNonGCFinalize;
- (void)removeObjectsAtIndexes:;
- (void)insertObjects:atIndexes:;
- (void)getObjects:range:;
- (id)objectsAtIndexes:;
- (void)insertObject:atIndex:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (void)addObject:;
- (void)replaceObjectsAtIndexes:withObjects:;
- (void)removeLastObject;
- (id)objectAtIndex:;
- (unsigned long long)count;
+ (id)_proxyShare;
@end
