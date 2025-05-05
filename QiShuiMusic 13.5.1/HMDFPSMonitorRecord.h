@interface HMDFPSMonitorRecord : HMDMonitorRecord
@property (nonatomic) double fps;
@property (nonatomic) BOOL sceneInSwitch;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isLowPowerMode;
@property (nonatomic) NSDictionary fpsExtralValue;
@property (nonatomic) Q refreshRate;
- (id)fpsExtralValue;
- (BOOL)sceneInSwitch;
- (void)setFpsExtralValue:;
- (void)setIsLowPowerMode:;
- (void)setSceneInSwitch:;
- (BOOL)isScrolling;
- (unsigned long long)refreshRate;
- (void).cxx_destruct;
- (double)value;
- (double)fps;
- (void)setIsScrolling:;
- (void)setRefreshRate:;
- (void)setFps:;
- (BOOL)isLowPowerMode;
- (id)reportDictionary;
+ (id)aggregateDataWithRecords:;
+ (unsigned long long)cleanupWeight;
@end
