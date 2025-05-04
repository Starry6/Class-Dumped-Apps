@interface AWEOfflineVideoCenterSectionController : AWEBaseListSectionController
@property (nonatomic) AWEOfflineViewModeEntranceView headerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)deleteCellAtIndex:;
- (id)collectionView:editActionsForItemAtIndexPath:forOrientation:;
- (void)collectionView:didEndEditingItemAtAtIndexPath:forOrientation:;
- (id)init;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (Class)headerViewClass;
@end
