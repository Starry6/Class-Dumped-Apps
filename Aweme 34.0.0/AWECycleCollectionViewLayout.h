@interface AWECycleCollectionViewLayout : UICollectionViewFlowLayout
@property (nonatomic) NSArray attributes;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) AWECycleCollectionView cycleView;
- (id)calculateLayoutAttributes;
- (void)setCycleView:;
- (id)calculateContentSizeWithLayoutAttributes:;
- (id)cycleView;
- (id)layoutContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:;
- (void)setContentSize:;
- (id)attributes;
- (id)contentSize;
- (id)collectionViewContentSize;
- (void)setAttributes:;
- (void).cxx_destruct;
@end
