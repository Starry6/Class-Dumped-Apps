@interface AWECommentFriendsSwiftImpl.CommentMediaFeedImageContentSectionController : _TtGC23BDMultiContentContainer28BaseContentSectionControllerC26AWECommentFriendsSwiftImpl44CommentMediaFeedImageContentSectionViewModel_
- (void)sectionControllerWillDisplay:;
- (void)sectionControllerDidEndDisplaying:;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillDisappear:isBeingDismissed:isMovingFromParentViewController:;
- (void)viewControllerDidDisappear:;
- (void)sectionWillDisplaySupplementaryView:;
- (void)sectionDidEndDisplayingSupplementaryView:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (id)init;
- (Class)cellClass;
+ (Class)sectionViewModelClass;
@end
