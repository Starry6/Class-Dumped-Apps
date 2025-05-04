@interface AWEFriendsImpl.VideoAlbumSectionController : _TtGC14AWEFriendsImpl32RichContentBaseSectionControllerCS_26VideoAlbumSectionViewModel_
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
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (id)sizeForFooterWithCollectionViewSize:;
- (id)init;
- (Class)cellClass;
- (void).cxx_destruct;
+ (Class)sectionViewModelClass;
@end
