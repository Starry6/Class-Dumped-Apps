@interface IESECHorizonFlowLayout : UICollectionViewLayout
@property (nonatomic) NSArray layoutAttributes;
@property (nonatomic) IESECHorizonFlowLayoutConfig config;
@property (nonatomic) <IESECHorizonFlowItemSizeDelegate> itemSizeDelegate;
- (id)initWithLayoutConfig:;
- (id)itemSizeDelegate;
- (void)setItemSizeDelegate:;
- (void)updateConfig:;
- (id)layoutAttributesForElementsInRect:;
- (void)prepareLayout;
- (void)setConfig:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (void)setLayoutAttributes:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (void).cxx_destruct;
- (id)layoutAttributes;
- (id)config;
@end
