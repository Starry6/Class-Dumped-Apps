@interface AWEGuestHomeHeaderSectionController : AWEBaseListSectionController
@property (nonatomic) AWEGuestHomeHeaderCell headerCell;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)networkingReachabilityDidChange:;
- (void)changeHeaderSectionAccessoriesIfNeeded;
- (void)handleClickNameEvent:model:userInfo:;
- (void)handleClickFollowNumEvent:model:userInfo:;
- (void)handleClickAvatarEvent:model:userInfo:;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (id)headerCell;
- (void)setHeaderCell:;
@end
