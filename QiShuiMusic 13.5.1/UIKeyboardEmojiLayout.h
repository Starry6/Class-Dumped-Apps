@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout
- (id)layoutAttributesForElementsInRect:;
- (void)dealloc;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)invalidationContextForBoundsChange:;
- (void)invalidateLayoutWithContext:;
- (id)invalidationContextForPreferredLayoutAttributes:withOriginalAttributes:;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (void).cxx_destruct;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (void)_setAttributes:forSection:;
+ (Class)invalidationContextClass;
@end
