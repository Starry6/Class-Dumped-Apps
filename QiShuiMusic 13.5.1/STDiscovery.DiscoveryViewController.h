@interface STDiscovery.DiscoveryViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etPageName;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:;
- (void)collectionView:didEndDisplayingSupplementaryView:forElementOfKind:atIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (id)etPageName;
- (id)etSceneName;
- (void)scrollViewDidScroll:;
- (void)viewSafeAreaInsetsDidChange;
- (void)dealloc;
- (id)initWithCoder:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
