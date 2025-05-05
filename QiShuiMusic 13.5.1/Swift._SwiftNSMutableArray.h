@interface Swift._SwiftNSMutableArray : Swift._SwiftNativeNSMutableArray
@property (nonatomic) q count;
- (void)insertObjects:count:atIndex:;
- (void)removeObjectsInRange:;
- (void)getObjects:range:;
- (long long)indexOfObjectIdenticalTo:;
- (void)replaceObjectsInRange:withObjects:count:;
- (void)exchangeObjectAtIndex:withObjectAtIndex:;
- (long long)countByEnumeratingWithState:objects:count:;
- (void)insertObject:atIndex:;
- (id)objectAtIndexedSubscript:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (void)setObject:atIndexedSubscript:;
- (void)addObject:;
- (void)removeAllObjects;
- (void)removeLastObject;
- (id)objectAtIndex:;
- (void)setObject:atIndex:;
- (long long)count;
- (id)copyWithZone:;
@end
