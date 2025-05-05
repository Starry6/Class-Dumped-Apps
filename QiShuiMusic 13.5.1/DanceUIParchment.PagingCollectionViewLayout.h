@interface DanceUIParchment.PagingCollectionViewLayout : UICollectionViewLayout
@property (nonatomic) {CGSize=dd} collectionViewContentSize;
@property (nonatomic) BOOL flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (void)invalidateLayoutWithContext:;
- (id)initWithCoder:;
- (id)invalidationContextForPreferredLayoutAttributes:withOriginalAttributes:;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:;
- (void).cxx_destruct;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
+ (Class)layoutAttributesClass;
@end
