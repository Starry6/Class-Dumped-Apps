@interface AWELiveVSTabHotRecSectionController : AWEBaseListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)listAdapter:willDisplaySectionController:;
- (void)listAdapter:didEndDisplayingSectionController:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (void)listAdapter:didEndDisplayingSectionController:cell:atIndex:;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:;
- (void)trackHotRecCellShowWithRecModel:;
- (id)init;
- (Class)cellClass;
- (double)separatorHeight;
- (Class)headerViewClass;
@end
