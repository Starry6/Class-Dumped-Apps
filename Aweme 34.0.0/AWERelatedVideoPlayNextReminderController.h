@interface AWERelatedVideoPlayNextReminderController : AWEVideoPlayControlBaseController
@property (nonatomic) AWERelatedVideoPlayNextMixVideoView playNextMixVideoView;
@property (nonatomic) BOOL hasShownReminderView;
- (void)setHide:;
- (void)setAppear:;
- (void)bindEvent;
- (id)playNextMixVideoView;
- (void)setHasShownReminderView:;
- (void)updatePlayerControlView;
- (void)showPlayingNextMixVideoTipsWithCompletion:;
- (void)updateRemindViewLayout;
- (void)showReminderView:duration:buttonTitle:withCompletion:;
- (BOOL)hasShownReminderView;
- (void)trackClickReminderView:clickReplay:;
- (BOOL)showMixVideoReminderView:withCompletion:;
- (void)trackShowReminderView;
- (void)setPlayNextMixVideoView:;
- (void)setModel:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
