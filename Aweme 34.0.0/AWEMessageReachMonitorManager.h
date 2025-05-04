@interface AWEMessageReachMonitorManager : NSObject
@property (nonatomic) q launchTimeStamp;
@property (nonatomic) q topBarPluginDidLoadTimeStamp;
@property (nonatomic) q tabbarPluginDidLoadTimeStamp;
@property (nonatomic) double realLaunchTimeStamp;
@property (nonatomic) NSMutableArray monitorChannelArray;
- (void)topBarPluginDidLoad;
- (void)tabBarPluginDidLoad;
- (BOOL)monitorWithTabID:;
- (long long)launchTimeStamp;
- (long long)tabbarPluginDidLoadTimeStamp;
- (void)setRealLaunchTimeStamp:;
- (void)setMonitorChannelArray:;
- (void)setTopBarPluginDidLoadTimeStamp:;
- (void)calculateLaunchTimeStamp;
- (long long)topBarPluginDidLoadTimeStamp;
- (void)setTabbarPluginDidLoadTimeStamp:;
- (double)realLaunchTimeStamp;
- (void)setLaunchTimeStamp:;
- (id)monitorChannelArray;
- (id)initWithConfig:;
- (void)setup;
- (void).cxx_destruct;
@end
