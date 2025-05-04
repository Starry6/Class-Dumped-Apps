@interface AWEGrouponLifeFeedsBodyLayout : UICollectionViewLayout
@property (nonatomic) NSArray attributesList;
@property (nonatomic) double contentHeight;
@property (nonatomic) <AWEGrouponLifeFeedsBodyLayoutDataSource> dataSource;
- (void)setAttributesList:;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)collectionViewContentSize;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)setContentHeight:;
- (void)setDataSource:;
- (id)dataSource;
- (id)attributesList;
@end
