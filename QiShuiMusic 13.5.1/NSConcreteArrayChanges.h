@interface NSConcreteArrayChanges : NSArrayChanges
- (id)HMDP_objectAtIndex:;
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
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (void)_enumerateChanges:stop:usingBlock:;
- (void)enumerateChangesUsingBlock:;
- (void)enumerateChanges:usingBlock:;
- (void)applyChangesToArray:;
@end
