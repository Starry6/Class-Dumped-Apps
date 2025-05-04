@interface AWESearchRecommWordsCollectionViewLayout : UICollectionViewLayout
@property (nonatomic) <AWESearchRecommWordsCollectionViewLayoutDelegate> delegate;
@property (nonatomic) double itemHeight;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) NSMutableArray attributes;
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
- (double)minimumLineSpacing;
- (void)setMinimumInteritemSpacing:;
- (void)setMinimumLineSpacing:;
- (double)itemHeight;
- (void)setItemHeight:;
@end
