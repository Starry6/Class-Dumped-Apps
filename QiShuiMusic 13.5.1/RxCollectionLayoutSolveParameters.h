@interface RxCollectionLayoutSolveParameters : NSObject
@property (nonatomic) BOOL hasInvalidatedItems;
@property (nonatomic) NSSet invalidatedAuxillaryKinds;
@property (nonatomic) NSIndexSet invalidatedIndexes;
@property (nonatomic) <RxCollectionLayoutAuxillaryOffsets> invalidatedAuxillaryOffsets;
@property (nonatomic) BOOL isFullResolve;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addItemIndex:;
- (BOOL)hasInvalidatedItems;
- (id)indexesForInvalidatedAuxiliariesOfKind:;
- (id)initWithInvalidatedIndexes:;
- (id)initWithInvalidatedIndexes:isFullResolve:;
- (id)invalidatedIndexes;
- (BOOL)isFullResolve;
- (id)init;
- (void).cxx_destruct;
- (id)invalidatedAuxillaryKinds;
- (id)invalidatedAuxillaryOffsets;
- (void)addAuxillaryIndex:elementKind:;
+ (id)parametersForFullResolve;
@end
