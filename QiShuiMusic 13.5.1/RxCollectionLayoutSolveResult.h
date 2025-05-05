@interface RxCollectionLayoutSolveResult : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addInvalidatedItemIndex:;
- (void)addInvalidatedItemIndexes:;
- (void)addInvalidatedItemIndexesInRange:;
- (void)addInvalidatedSupplementariesWithOffsets:;
- (id)indexesForInvalidatedAuxiliariesOfKind:;
- (id)invalidatedIndexes;
- (id)init;
- (void).cxx_destruct;
- (id)invalidatedAuxillaryKinds;
- (void)addInvalidatedAuxillaryOfKind:index:;
- (void)addInvalidatedAuxillaryOfKind:indexes:;
- (id)invalidatedAuxillaryOffsets;
@end
