@interface AWEVideoDescriptionMaskHeaderSectionController : AWEBaseListSectionController
@property (nonatomic) AWEVideoDescriptionMaskHeaderView headerView;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)init;
- (id)headerView;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setHeaderView:;
@end
