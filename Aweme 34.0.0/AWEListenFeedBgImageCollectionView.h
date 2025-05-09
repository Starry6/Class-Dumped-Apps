@interface AWEListenFeedBgImageCollectionView : UIView
@property (nonatomic) AWEListenFeedBaseCollectionView collectionView;
@property (nonatomic) q numberOfItems;
@property (nonatomic) q currentIndex;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} priviousBounds;
@property (nonatomic) <AWEListenFeedBgImageCollectionViewDataSource> dataSource;
@property (nonatomic) <AWEListenFeedBgImageCollectionViewDelegate> delegate;
@property (nonatomic) BOOL padNeedUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPadNeedUpdate:;
- (void)scrollToContentOffset:;
- (id)dequeueReusableCellWithClass:forIndexPath:;
- (void)registerCellClass:;
- (id)priviousBounds;
- (BOOL)padNeedUpdate;
- (void)setPriviousBounds:;
- (double)caculateOffsetXAtIndex:;
- (void)scrollToItemAtIndex:animate:;
- (void)reloadData;
- (id)collectionView;
- (long long)numberOfItems;
- (id)delegate;
- (void)setCurrentIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setNumberOfItems:;
- (void)setDataSource:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)dataSource;
- (long long)currentIndex;
- (id)cellForItemAtIndexPath:;
- (void)resetLayout;
- (void)setupUI;
- (void)updateData;
@end
