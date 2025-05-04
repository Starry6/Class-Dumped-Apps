@interface AWEAwemeDetailAlbumCommonController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEFeedVolumeAdjustObserver volumeObserver;
@property (nonatomic) BOOL canShowMuteGuideButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowMuteGuideButton;
- (void)tableView:didEndDisplayingCellBeforeReset:forRowAtIndexPath:;
- (void)onAwemeDeletedWithModel:isDislike:index:;
- (BOOL)volumeObserverEnabled;
- (void)trackEndMultiPhotoConsume:cell:;
- (void)setCanShowMuteGuideButton:;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setVolumeObserver:;
- (id)volumeObserver;
@end
