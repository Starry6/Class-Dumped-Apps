@interface RxCollectionLayoutAuxillaryOffsets : NSObject
@property (nonatomic) NSSet elementKinds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)incrementCountsFromOffsets:;
- (id)init;
- (id)offsetsByRebasingOnOffsets:;
- (id)indexesForElementKind:;
- (id)elementKinds;
- (long long)offsetForElementKind:;
- (id)rangeForElementKind:;
- (void).cxx_destruct;
- (BOOL)overlapsOffsets:;
- (BOOL)containsIndex:forElementKind:;
- (id)description;
- (id)offsetsByApplyingOffsets:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOffsets:;
- (void)setRange:forElementKind:;
- (void)setIndexes:forElementKind:;
- (void)addIndexes:forElementKind:;
- (void)incrementCountForElementKind:;
- (void)_offsetWithOffsets:applyingBase:;
@end
