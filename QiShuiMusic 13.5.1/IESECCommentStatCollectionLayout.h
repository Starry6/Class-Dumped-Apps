@interface IESECCommentStatCollectionLayout : UICollectionViewFlowLayout
@property (nonatomic) NSArray layoutAttributes;
@property (nonatomic) <IESECCommentStatCellLayoutSizeDelegate> sizeDelegate;
- (id)layoutAttributesForElementsInRect:;
- (void)prepareLayout;
- (void)setLayoutAttributes:;
- (id)sizeDelegate;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (void).cxx_destruct;
- (id)layoutAttributes;
- (void)setSizeDelegate:;
@end
