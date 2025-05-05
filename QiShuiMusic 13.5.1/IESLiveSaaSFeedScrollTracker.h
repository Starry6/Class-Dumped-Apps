@interface IESLiveSaaSFeedScrollTracker : NSObject
@property (nonatomic) IESLiveSaaSLiveRoomModel currentRoom;
@property (nonatomic) BOOL fpsMonitorRunning;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) IESLiveSaaSFeedFPSMonitor fpsMonitor;
@property (nonatomic) NSString subTrackString;
- (id)fpsMonitor;
- (BOOL)fpsMonitorRunning;
- (void)setFpsMonitor:;
- (void)setFpsMonitorRunning:;
- (void)setSubTrackString:;
- (void)startMonitorFeedFPS;
- (void)stopMonitorFeedFPS;
- (id)subTrackString;
- (void)trackForCollecetionView:dataSource:;
- (void)trackForFeedItem:decelerate:;
- (void)trackWithRoom:decelerate:eventContext:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (void)setCurrentRoom:;
- (id)currentRoom;
@end
