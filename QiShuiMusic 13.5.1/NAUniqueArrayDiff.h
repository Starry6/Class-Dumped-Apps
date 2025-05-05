@interface NAUniqueArrayDiff : NSObject
@property (nonatomic) NSArray fromArray;
@property (nonatomic) NSArray toArray;
@property (nonatomic) NSIndexSet deletedIndexes;
@property (nonatomic) NSIndexSet insertedIndexes;
@property (nonatomic) NSIndexSet changedIndexes;
@property (nonatomic) NSSet movedIndexes;
@property (nonatomic) Q numberOfOperations;
- (id)changedIndexes;
- (id)insertedIndexes;
- (id)movedIndexes;
- (void).cxx_destruct;
- (void)enumerateMovesUsingBlock:;
- (id)deletedIndexes;
- (void)enumerateChangesUsingBlock:;
- (id)toArray;
- (void)setDeletedIndexes:;
- (void)setInsertedIndexes:;
- (unsigned long long)numberOfOperations;
- (void)enumerateInsertsUsingBlock:;
- (void)enumerateDeletesUsingBlock:;
- (id)fromArray;
- (void)setFromArray:;
- (void)setToArray:;
- (void)setChangedIndexes:;
- (void)setMovedIndexes:;
+ (id)diffFromArray:toArray:options:;
+ (id)_createContainerSetFromArray:options:;
@end
