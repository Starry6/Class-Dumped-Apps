@interface IESECWinFeedFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) @? prepareLayoutFinish;
- (void)configDataSource:;
- (void)configListObject:sectionController:;
- (id)dataSourceKey:;
- (id)getRectWithObject:;
- (id)prepareLayoutFinish;
- (void)setPrepareLayoutFinish:;
- (id)layoutAttributesForElementsInRect:;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
