@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges
- (unsigned long long)changeCount;
- (id)init;
- (void)getObjects:range:;
- (void)dealloc;
- (void)sortRange:options:usingComparator:;
- (void)addChange:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithObjects:count:;
- (id)objectAtIndex:;
- (unsigned long long)count;
- (id)copyWithZone:;
- (void)_enumerateChanges:stop:usingBlock:;
- (void)enumerateChangesUsingBlock:;
- (void)enumerateChanges:usingBlock:;
@end
