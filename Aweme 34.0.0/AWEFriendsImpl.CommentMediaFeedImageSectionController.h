@interface AWEFriendsImpl.CommentMediaFeedImageSectionController : _TtGC14AWEFriendsImpl32RichContentBaseSectionControllerCS_37CommentMediaFeedImageSectionViewModel_
- (void)sectionControllerWillDisplay:;
- (void)sectionControllerDidEndDisplaying:;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillDisappear:isBeingDismissed:isMovingFromParentViewController:;
- (void)viewControllerDidDisappear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)sectionWillDisplaySupplementaryView:;
- (void)sectionDidEndDisplayingSupplementaryView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)init;
- (Class)cellClass;
+ (Class)sectionViewModelClass;
@end
