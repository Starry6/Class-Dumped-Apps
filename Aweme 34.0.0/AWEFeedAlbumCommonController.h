@interface AWEFeedAlbumCommonController : AWEBaseController
- (BOOL)canShowMuteGuideButton;
- (void)onAwemeDeletedWithModel:isLiveFinish:isDislike:index:isLiveEnded:;
- (void)tableView:didEndDisplayingCellBeforeReset:forRowAtIndexPath:;
- (id)init;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
