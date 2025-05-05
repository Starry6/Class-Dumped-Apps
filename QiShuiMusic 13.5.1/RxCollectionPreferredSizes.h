@interface RxCollectionPreferredSizes : NSObject
@property (nonatomic) q frameOffset;
@property (nonatomic) <RxCollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)hasSizes;
- (void)setSupplementaryBaseOffsets:;
- (id)objectAtIndexedSubscript:;
- (void)setObject:atIndexedSubscript:;
- (id)elementKinds;
- (BOOL)containsSupplementaryOffsets:;
- (id)indexes;
- (id)initWithSizes:indexes:supplementarySizesDict:frameOffset:supplementaryBaseOffsets:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (void)addPreferredSize:forSupplementaryWithElementKind:atIndex:;
- (id)description;
- (void)setFrameOffset:;
- (id)copyByDirtyingPreferredSizes;
- (long long)frameOffset;
- (id)supplementaryBaseOffsets;
- (id)preferredSizesApplyingFrameOffset:supplementaryBaseOffsets:;
- (id)copyWithZone:;
@end
