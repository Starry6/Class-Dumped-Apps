@interface AWEFriendsImpl.ForwardAwemeSectionController : _TtGC23BDMultiContentContainer28BaseContentSectionControllerC14AWEFriendsImpl28ForwardAwemeSectionViewModel_
- (void)playerDidReadyForDisplay:;
- (BOOL)forceDisableVideoViewUp;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (BOOL)shouldResponseToTap:from:;
- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:;
- (void)readdPinchTargetView;
- (BOOL)isContentReady;
- (id)getVideoController;
- (void)prepareForDisplayIfNeeded;
- (void)listAdapter:didScrollSectionController:;
- (void)listAdapter:willBeginDraggingSectionController:;
- (void)listAdapter:didEndDraggingSectionController:willDecelerate:;
- (void)listAdapter:didEndDeceleratingSectionController:;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (void).cxx_destruct;
+ (Class)sectionViewModelClass;
@end
