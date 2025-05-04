@interface AWEBaseListAdapterUpdaterDelegate : NSObject
@property (nonatomic) UIViewController<AWEBaseListUpdateDelegate><AWEBaseListViewControllerProtocol> viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFooterHiddenState:;
- (void)triggerSectionControllersDidAppearIfNeeded;
- (void)listAdapterUpdater:willPerformBatchUpdatesWithCollectionView:;
- (void)listAdapterUpdater:didPerformBatchUpdates:collectionView:;
- (void)listAdapterUpdater:willInsertIndexPaths:collectionView:;
- (void)listAdapterUpdater:willDeleteIndexPaths:collectionView:;
- (void)listAdapterUpdater:willMoveFromIndexPath:toIndexPath:collectionView:;
- (void)listAdapterUpdater:willReloadIndexPaths:collectionView:;
- (void)listAdapterUpdater:willReloadSections:collectionView:;
- (void)listAdapterUpdater:willReloadDataWithCollectionView:;
- (void)listAdapterUpdater:didReloadDataWithCollectionView:;
- (void)listAdapterUpdater:collectionView:willCrashWithException:fromObjects:toObjects:updates:;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
+ (id)delegateWithViewController:;
@end
