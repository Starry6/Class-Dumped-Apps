@interface AWEIronManLandingPageDiscoveryBannerSectionView : UITableViewCell
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEIronManLandingPageDiscoveryBannerViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descLabel;
- (void)setDescLabel:;
- (void)trackItemClickAtIndex:;
- (void)trackItemShowAtIndex:;
- (void)trackScrollAction;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView;
- (id)initWithViewModel:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setUpUI;
@end
