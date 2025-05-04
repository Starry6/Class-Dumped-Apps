@interface AWEHPEntranceStayTimeTrackController : NSObject
@property (nonatomic) NSMutableDictionary timingEntrances;
- (void)addNotifications;
- (void)enterHPSearchEntrance;
- (void)leaveHPSearchEntrance;
- (void)enterPublishEntrance;
- (void)leavePublishEntrance;
- (void)startTimingWithEntranceId:;
- (void)endTimingWithEntranceId:;
- (id)timingEntrances;
- (id)currentSelectedTabId;
- (void)trackHPTabStayTimeWihtModel:duration:;
- (void)pauseTimingWithTimingModel:;
- (void)resumeTimingWithTimingModel:;
- (void)enterHPLeftSideBar;
- (void)leaveHPLeftSideBar;
- (void)resumeTimingWhenBackToForegroundIfNeed;
- (void)pauseTimingWhenEnterBackgroundIfNeed;
- (void)setTimingEntrances:;
- (id)init;
- (void)dealloc;
- (void)appWillResignActive:;
- (void)removeNotifications;
- (void)appDidBecomeActive:;
- (void).cxx_destruct;
@end
