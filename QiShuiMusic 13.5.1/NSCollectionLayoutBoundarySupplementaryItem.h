@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem
@property (nonatomic) q _pinningZIndex;
@property (nonatomic) BOOL extendsBoundary;
@property (nonatomic) BOOL pinToVisibleBounds;
@property (nonatomic) q alignment;
@property (nonatomic) {CGPoint=dd} offset;
- (BOOL)extendsBoundary;
- (id)initWithSize:contentInsets:elementKind:containerAnchor:itemAnchor:zIndex:alignment:offset:extendsBoundary:pinToVisibleBounds:;
- (id)offset;
- (void)setExtendsBoundary:;
- (id)boundarySupplementaryItem;
- (void)setPinningZIndex:;
- (void)setPinToVisibleBounds:;
- (id)copyWithContainerAnchor:itemAnchor:;
- (void)_setPinningZIndex:;
- (long long)alignment;
- (BOOL)isEqual:;
- (long long)_pinningZIndex;
- (BOOL)pinToVisibleBounds;
- (id)copyWithZone:;
+ (id)boundarySupplementaryItemWithLayoutSize:elementKind:alignment:;
+ (id)boundarySupplementaryItemWithLayoutSize:elementKind:alignment:absoluteOffset:;
+ (id)itemWithLayoutSize:supplementaryItems:;
+ (id)itemWithLayoutSize:;
@end
