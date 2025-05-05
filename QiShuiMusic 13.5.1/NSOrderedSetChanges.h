@interface NSOrderedSetChanges : NSMutableOrderedSet
@property (nonatomic) Q changeCount;
- (unsigned long long)changeCount;
- (void)addChange:;
- (void)exchangeObjectAtIndex:withObjectAtIndex:;
- (void)insertObject:atIndex:;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)addChanges:;
- (id)copyWithZone:;
- (BOOL)_isToManyChangeInformation;
- (void)enumerateChangesUsingBlock:;
- (void)enumerateChanges:usingBlock:;
- (long long)_toManyPropertyType;
- (void)updateObject:atIndex:;
- (void)moveObjectAtIndex:toIndex:;
- (void)moveObjectsAtIndexes:toIndex:;
- (void)applyChangesToOrderedSet:;
+ (id)allocWithZone:;
@end
