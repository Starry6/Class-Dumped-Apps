@interface AWESearchHomeRecomWordsSingleRowCollectionViewLayout : UICollectionViewLayout
@property (nonatomic) double itemHeight;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) NSMutableArray attributes;
@property (nonatomic) <AWESearchrecomWordsCollectionViewLayoutDelegate> delegate;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)delegate;
- (id)attributes;
- (id)collectionViewContentSize;
- (void)setAttributes:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)minimumInteritemSpacing;
- (void)setMinimumInteritemSpacing:;
- (double)itemHeight;
- (void)setItemHeight:;
@end
