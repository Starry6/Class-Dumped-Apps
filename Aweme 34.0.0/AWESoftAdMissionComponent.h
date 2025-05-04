@interface AWESoftAdMissionComponent : AWEUserDetailBaseComponent
@property (nonatomic) BOOL softAdMission;
- (void)handleAppBecomeActive;
- (BOOL)viewDidLoadAndFromSoftAdMissionViewController;
- (void)softAdMissionMaybeUpdateTimer;
- (void)setSoftAdMission:;
- (BOOL)softAdMission;
- (BOOL)currentIsUserDetailViewController;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)handleAppWillResignActive;
@end
