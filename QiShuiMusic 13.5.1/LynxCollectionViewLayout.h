@interface LynxCollectionViewLayout : UICollectionViewLayout
@property (nonatomic) LynxCollectionViewLayoutSectionModel sectionModel;
@property (nonatomic) BOOL enableSticky;
@property (nonatomic) LynxCollectionScroll scroll;
@property (nonatomic) BOOL indexAsZIndex;
@property (nonatomic) NSIndexPath targetIndexPathAfterBatchUpdate;
@property (nonatomic) double targetOffsetDeltaAfterBatchUpdate;
@property (nonatomic) BOOL needsAdjustContentOffsetForSelfSizingCells;
@property (nonatomic) BOOL needUpdateValidLayoutAttributesAfterDiff;
@property (nonatomic) BOOL enableAlignHeight;
- (id)targetIndexPathAfterBatchUpdate;
- (void)calculateTargetIndexPathWithContext:;
- (BOOL)enableAlignHeight;
- (BOOL)enableSticky;
- (BOOL)indexAsZIndex;
- (BOOL)isStickyItem:;
- (id)layoutAttributesForStickItemAtIndexPath:;
- (BOOL)needUpdateValidLayoutAttributesAfterDiff;
- (BOOL)needsAdjustContentOffsetForSelfSizingCells;
- (void)prepareForCellLayoutUpdate;
- (id)sectionModel;
- (void)setEnableAlignHeight:;
- (void)setEnableSticky:;
- (void)setFixSelfSizingOffsetFromStart:;
- (void)setIndexAsZIndex:;
- (void)setNeedUpdateValidLayoutAttributesAfterDiff:;
- (void)setNeedsAdjustContentOffsetForSelfSizingCells:;
- (void)setScroll:;
- (void)setSectionModel:;
- (void)setStickyOffset:;
- (void)setStickyWithBounces:;
- (void)setTargetIndexPathAfterBatchUpdate:;
- (void)setTargetOffsetDeltaAfterBatchUpdate:;
- (void)setUseOldSticky:;
- (double)targetOffsetDeltaAfterBatchUpdate;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (void)setHorizontalLayout:;
- (id)collectionViewContentSize;
- (id)invalidationContextForBoundsChange:;
- (void)invalidateLayoutWithContext:;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:;
- (id)invalidationContextForPreferredLayoutAttributes:withOriginalAttributes:;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (void).cxx_destruct;
- (void)prepareForCollectionViewUpdates:;
- (void)finalizeCollectionViewUpdates;
- (id)scroll;
+ (Class)invalidationContextClass;
@end
