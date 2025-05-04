@interface AWEHomePagePerfMetricsMonitorConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSDictionary eventData;
@property (nonatomic) NSDictionary sessionEndDispatchTimes;
@property (nonatomic) NSDictionary sceneEndDispatchTimes;
@property (nonatomic) NSDictionary monitorEvent;
@property (nonatomic) NSDictionary monitorScene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)monitorEvent;
- (id)monitorScene;
- (id)sceneEndDispatchTimes;
- (id)sessionEndDispatchTimes;
- (void)setSessionEndDispatchTimes:;
- (void)setSceneEndDispatchTimes:;
- (void)setMonitorEvent:;
- (void)setMonitorScene:;
- (BOOL)enable;
- (id)eventData;
- (void).cxx_destruct;
- (void)setEnable:;
- (void)setEventData:;
+ (id)JSONKeyPathsByPropertyKey;
@end
