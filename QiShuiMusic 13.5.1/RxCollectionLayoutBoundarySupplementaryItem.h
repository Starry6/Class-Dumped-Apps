@interface RxCollectionLayoutBoundarySupplementaryItem : RxCollectionLayoutSupplementaryItem
@property (nonatomic) q alignment;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) BOOL extendsBoundary;
@property (nonatomic) BOOL pinToVisibleBounds;
- (id)initWithLayoutSize:elementKind:alignment:absoluteOffset:;
- (BOOL)extendsBoundary;
- (void)setOffset:;
- (void)setAlignment:;
- (id)initWithSize:contentInsets:elementKind:containerAnchor:itemAnchor:zIndex:alignment:offset:extendsBoundary:pinToVisibleBounds:;
- (id)offset;
- (void)setExtendsBoundary:;
- (void)setPinToVisibleBounds:;
- (id)copyWithContainerAnchor:itemAnchor:;
- (long long)alignment;
- (BOOL)pinToVisibleBounds;
- (id)copyWithZone:;
+ (id)boundarySupplementaryItemWithLayoutSize:elementKind:alignment:;
+ (id)boundarySupplementaryItemWithLayoutSize:elementKind:alignment:absoluteOffset:;
@end
