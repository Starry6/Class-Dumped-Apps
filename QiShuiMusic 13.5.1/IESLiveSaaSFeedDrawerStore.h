@interface IESLiveSaaSFeedDrawerStore : NSObject
@property (nonatomic) RACDisposable disposable;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) BOOL liveWillFinished;
- (BOOL)canShowDrawerSwipeGuideWithoutSaveState;
- (BOOL)checkAndMarkShowGuide:;
- (id)disposable;
- (BOOL)liveWillFinished;
- (void)setDisposable:;
- (void)setEntranceSearchGuideShown;
- (void)setLiveWillFinished:;
- (void)setTrackContext:;
- (void)trackAlertShowMoreAnchorClick;
- (void)trackCloseGuideShow;
- (id)trackContext;
- (void)trackMoreAnchorShow;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
@end
