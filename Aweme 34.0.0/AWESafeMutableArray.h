@interface AWESafeMutableArray : NSMutableArray
- (id)syncQueue;
- (void)replaceObjectAtIndex:withObject:;
- (void)insertObject:atIndex:;
- (unsigned long long)indexOfObject:;
- (id)init;
- (void)removeObjectAtIndex:;
- (void)removeLastObject;
- (void)removeAllObjects;
- (unsigned long long)count;
- (id)objectAtIndex:;
- (void)addObject:;
@end
