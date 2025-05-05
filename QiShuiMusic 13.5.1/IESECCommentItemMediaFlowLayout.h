@interface IESECCommentItemMediaFlowLayout : UICollectionViewLayout
@property (nonatomic) NSArray layoutAttributes;
@property (nonatomic) IESECCommentItemViewLayout itemViewLayout;
- (id)initWithItemViewLayout:;
- (id)itemViewLayout;
- (void)setItemViewLayout:;
- (id)layoutAttributesForElementsInRect:;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (void)setLayoutAttributes:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (void).cxx_destruct;
- (id)layoutAttributes;
@end
