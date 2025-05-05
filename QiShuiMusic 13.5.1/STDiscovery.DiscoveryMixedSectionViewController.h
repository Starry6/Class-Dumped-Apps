@interface STDiscovery.DiscoveryMixedSectionViewController : UIViewController
- (void)pageViewController:willTransitionToViewControllers:;
- (void)pageViewController:didFinishAnimating:previousViewControllers:transitionCompleted:;
- (id)pageViewController:viewControllerBeforeViewController:;
- (id)pageViewController:viewControllerAfterViewController:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)initWithCoder:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
