@interface AWESearchStackLayout : UICollectionViewFlowLayout
@property (nonatomic) Q visibleItemsCount;
@property (nonatomic) double itemOffset;
@property (nonatomic) double itemScale;
@property (nonatomic) double leftMargin;
@property (nonatomic) double topItemWidth;
@property (nonatomic) q currentPage;
- (double)itemOffset;
- (void)setItemOffset:;
- (double)itemScale;
- (void)setItemScale:;
- (void)setVisibleItemsCount:;
- (void)setTopItemWidth:;
- (id)collectionBounds;
- (unsigned long long)visibleItemsCount;
- (id)layoutAttributesForIndexPath:currentPage:offset:offsetProgress:;
- (double)topItemWidth;
- (double)parallaxProgressForVisibleIndex:offsetProgress:minScale:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (double)leftMargin;
- (id)contentOffset;
- (id)collectionViewContentSize;
- (void)setLeftMargin:;
- (long long)currentPage;
- (long long)itemsCount;
@end
