@interface AWEIMChatPanelCollectionViewHorizontalLayout : UICollectionViewFlowLayout
@property (nonatomic) q pageCount;
@property (nonatomic) NSMutableArray allAttributes;
@property (nonatomic) <AWEIMChatPanelCollectionViewHorizontalLayoutDataSource> dataSource;
- (id)layoutAttributesForElementsInRect:;
- (void)setDataSource:;
- (void)prepareLayout;
- (long long)pageCount;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setPageCount:;
- (id)allAttributes;
- (void)setAllAttributes:;
@end
