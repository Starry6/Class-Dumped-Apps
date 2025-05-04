@interface AWEVideoEditStickerCollectionviewFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) BOOL disableHeadersPinToVisibleBounds;
- (void)setDisableHeadersPinToVisibleBounds:;
- (BOOL)disableHeadersPinToVisibleBounds;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:;
@end
