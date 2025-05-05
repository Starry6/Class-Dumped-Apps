@interface IESIMBaseListAdapterUpdaterDelegate : NSObject
@property (nonatomic) UIViewController<IESIMBaseListUpdateDelegate> viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)listAdapterUpdater:collectionView:willCrashWithException:fromObjects:toObjects:updates:;
- (void)listAdapterUpdater:didPerformBatchUpdates:collectionView:;
- (void)listAdapterUpdater:didReloadDataWithCollectionView:;
- (void)listAdapterUpdater:willDeleteIndexPaths:collectionView:;
- (void)listAdapterUpdater:willInsertIndexPaths:collectionView:;
- (void)listAdapterUpdater:willMoveFromIndexPath:toIndexPath:collectionView:;
- (void)listAdapterUpdater:willPerformBatchUpdatesWithCollectionView:;
- (void)listAdapterUpdater:willReloadDataWithCollectionView:;
- (void)listAdapterUpdater:willReloadIndexPaths:collectionView:;
- (void)listAdapterUpdater:willReloadSections:collectionView:;
- (void)setViewController:;
- (id)viewController;
- (void).cxx_destruct;
+ (id)delegateWithViewController:;
@end
