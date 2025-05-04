@interface AWEIronManLandingPageDeepRelationSectionView : UITableViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEBannerPageControl pageControl;
@property (nonatomic) AWEIronManLandingPageDeepRelationViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackItemClickAtIndex:;
- (void)trackItemShowAtIndex:;
- (void)trackScrollAction;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (void)setPageControl:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView;
- (id)pageControl;
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
