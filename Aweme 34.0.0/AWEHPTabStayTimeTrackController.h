@interface AWEHPTabStayTimeTrackController : NSObject
@property (nonatomic) NSMutableDictionary timingTabs;
@property (nonatomic) MMKV mmkv;
- (void)addNotifications;
- (void)setMmkv:;
- (id)mmkv;
- (id)pauseTimingWithTimingModel:;
- (void)resumeTimingWithTimingModel:;
- (void)coldLaunchTrackIfNeed;
- (id)timingTabs;
- (void)endTimingWithTabIDIfNeed:isLandingLeave:;
- (id)trackHPTabStayTimeWithModel:duration:reportReason:;
- (BOOL)enableColdLaunchTrack;
- (id)getTimingModelWithTabID:;
- (void)startTimingWithModel:;
- (void)endTimingWithModel:;
- (void)setTimingTabs:;
- (id)init;
- (void)dealloc;
- (void)appWillResignActive:;
- (void)removeNotifications;
- (void)appDidBecomeActive:;
- (void).cxx_destruct;
@end
