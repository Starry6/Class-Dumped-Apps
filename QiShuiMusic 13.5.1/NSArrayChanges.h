@interface NSArrayChanges : NSMutableArray
@property (nonatomic) Q changeCount;
- (void)HMDP_replaceObjectAtIndex:withObject:;
- (void)HMDP_removeObjectAtIndex:;
- (void)HMDP_insertObject:atIndex:;
- (void)sortUsingSelector:;
- (unsigned long long)changeCount;
- (void)addChange:;
- (void)exchangeObjectAtIndex:withObjectAtIndex:;
- (void)insertObject:atIndex:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (id)initWithCoder:;
- (void)addObject:;
- (void)encodeWithCoder:;
- (void)removeLastObject;
- (void)addChanges:;
- (id)copyWithZone:;
- (BOOL)_isToManyChangeInformation;
- (void)enumerateChangesUsingBlock:;
- (void)enumerateChanges:usingBlock:;
- (void)applyChangesToArray:;
- (long long)_toManyPropertyType;
- (void)updateObject:atIndex:;
- (void)moveObjectAtIndex:toIndex:;
- (void)moveObjectsAtIndexes:toIndex:;
- (void)sortUsingFunction:context:;
+ (id)allocWithZone:;
@end
