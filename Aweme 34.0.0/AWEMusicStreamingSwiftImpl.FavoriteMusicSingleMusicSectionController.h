@interface AWEMusicStreamingSwiftImpl.FavoriteMusicSingleMusicSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)sectionWillDisplaySupplementaryView:;
- (void)handleUIThemeChangeNotificationWithNotice:;
- (void)handleCellEvent:model:userInfo:;
- (void)handleCellSameStyleEvent:model:userInfo:;
- (id)init;
- (Class)cellClass;
- (void).cxx_destruct;
- (Class)headerViewClass;
@end
