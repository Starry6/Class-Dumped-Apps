@interface CNContactGridViewLayout : UICollectionViewFlowLayout
@property (nonatomic) BOOL needsUpdateLayout;
@property (nonatomic) double offsetBefore;
@property (nonatomic) double offsetAfter;
@property (nonatomic) double selectedItemWidthOffset;
@property (nonatomic) q numberOfColumns;
@property (nonatomic) NSIndexPath selectedIndexPath;
- (id)layoutAttributesForElementsInRect:;
- (long long)numberOfColumns;
- (void)setNumberOfColumns:;
- (id)layoutAttributesForItemAtIndexPath:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)prepareForCollectionViewUpdates:;
- (id)_animationForReusableView:toLayoutAttributes:type:;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:;
- (void)_updateLayoutMetrics;
- (BOOL)needsUpdateLayout;
- (void)setNeedsUpdateLayout:;
- (double)offsetBefore;
- (void)setOffsetBefore:;
- (double)offsetAfter;
- (void)setOffsetAfter:;
- (double)selectedItemWidthOffset;
- (void)setSelectedItemWidthOffset:;
@end
