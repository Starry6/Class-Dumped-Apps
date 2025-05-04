@interface AWEECLandingCommodityList : UICollectionViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <AWEECLandingCommodityListDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithMerchandiseModelList:hasMore:;
- (void)commodityCard:didClickBuyButtonWithMerchandise:;
- (void)viewMoreButtonDidClick:;
- (void)updateTrailViewLayout;
- (void)trailViewShouldBeTriggered;
- (id)collectionView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setupSubviews;
@end
