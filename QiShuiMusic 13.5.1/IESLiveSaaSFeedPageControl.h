@interface IESLiveSaaSFeedPageControl : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <HTSLiveSaaSFeedPageControlDelegate> delegate;
@property (nonatomic) <HTSLiveSaaSFeedPageControlDataSource> datasource;
@property (nonatomic) <HTSLiveSaaSFeedPageItem> currentItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)changeTo:;
- (void)reloadData;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setCurrentItem:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)currentItem;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (id)collectionView;
- (id)datasource;
- (void)setDatasource:;
- (void)selectItem:;
@end
