@interface MFArrayDiff : NSObject
@property (nonatomic) NSIndexSet commonIndexes;
@property (nonatomic) NSIndexSet addedIndexes;
@property (nonatomic) NSIndexSet removedIndexes;
- (id)removedIndexes;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)commonIndexes;
- (void)setCommonIndexes:;
- (id)addedIndexes;
- (void)setAddedIndexes:;
- (void)setRemovedIndexes:;
@end
