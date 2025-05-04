@interface AWEProfileHeaderGuestFollowAreaSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)handleFollowButtonEvent:model:userInfo:;
- (id)init;
- (Class)cellClass;
@end
