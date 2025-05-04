@interface AWEFriendsImpl.VideoAlbumContentSectionController : _TtGC23BDMultiContentContainer28BaseContentSectionControllerC14AWEFriendsImpl33VideoAlbumContentSectionViewModel_
- (void)overlayView:containerDidScrollTo:;
- (void)overlayView:didUpdateSize:;
- (BOOL)overlayView:shouldResponseToTap:from:;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)player:didChangePlaybackToAction:;
- (id)forwardingTargetForSelector:;
- (id)getImageViewSizeWithMaxWHRatio;
- (double)getImageContentTopInset;
- (id)getTemporaryImageViewRectWithMinWHRatio;
- (void)updateImageContentViewTopInsetWithLeftInteractionMinY:authorElementMinY:;
- (void)clearImageContentViewTopInset;
- (id)getCurrentImageView;
- (BOOL)shouldAlbumResponseToPinch;
- (void)startProgressTimer;
- (id)getVideoController;
- (void)prepareForDisplayIfNeeded;
- (void)sectionControllerWillDisplay:;
- (void)sectionControllerDidEndDisplaying:;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (id)init;
- (Class)cellClass;
- (void).cxx_destruct;
+ (Class)sectionViewModelClass;
@end
