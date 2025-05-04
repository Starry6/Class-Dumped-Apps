@interface AWEGuestFollowListSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)selectItemEnterUserProfileAtIndex:model:;
- (void)handleFollowButtonEvent:model:userInfo:;
- (id)init;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (Class)headerViewClass;
@end
