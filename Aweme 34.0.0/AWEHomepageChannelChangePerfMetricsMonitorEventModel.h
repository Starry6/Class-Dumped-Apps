@interface AWEHomepageChannelChangePerfMetricsMonitorEventModel : NSObject
@property (nonatomic) double appLaunchTime;
@property (nonatomic) NSMutableArray sceneModelArray;
@property (nonatomic) AWEHomepageChannelChangePerfMetricsMonitorPlugin plugin;
@property (nonatomic) AWEHomepageChannelChangePerfMetricsMonitorEventConfig eventConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)p_getCurrentTime;
- (id)eventConfig;
- (void)setEventConfig:;
- (void)beginSessionPerfMetricsMonitorWithParams:;
- (void)beginScenePerfMetricsMonitorWithParams:;
- (void)cancelScenePerfMetricsMonitorWithParams:;
- (void)setAppLaunchTime:;
- (void)setSceneModelArray:;
- (id)sceneModelArray;
- (void)p_endScenePerfMetricsMonitorWithParams:;
- (void)p_endSessionPerfMetricsMonitorWithParams:;
- (id)initWithAppLaunchTime:withConfigData:withDelegate:;
- (void)endScenePerfMetricsMonitorWithParams:withDelayTime:;
- (void)endSessionPerfMetricsMonitorWithParams:withDelayTime:;
- (void).cxx_destruct;
- (id)plugin;
- (void)setPlugin:;
- (double)appLaunchTime;
@end
