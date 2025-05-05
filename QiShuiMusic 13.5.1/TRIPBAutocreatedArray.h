@interface TRIPBAutocreatedArray : NSMutableArray
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void)insertObject:atIndex:;
- (void)enumerateObjectsWithOptions:usingBlock:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (void)addObject:;
- (void)removeObject:;
- (void)removeLastObject;
- (id)objectAtIndex:;
- (void)enumerateObjectsUsingBlock:;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (id)copyWithZone:;
@end
