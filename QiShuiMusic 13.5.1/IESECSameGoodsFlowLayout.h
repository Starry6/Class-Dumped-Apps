@interface IESECSameGoodsFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) NSArray layoutAttributes;
@property (nonatomic) NSArray sectionLayoutAtrributes;
@property (nonatomic) <IESECSameGoodsFlowLayoutDelegate> delegate;
- (id)sectionLayoutAtrributes;
- (void)setSectionLayoutAtrributes:;
- (id)layoutAttributesForElementsInRect:;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (void)setDelegate:;
- (id)collectionViewContentSize;
- (void)setLayoutAttributes:;
- (id)delegate;
- (void).cxx_destruct;
- (id)layoutAttributes;
- (id)cellSizeForIndexPath:;
@end
