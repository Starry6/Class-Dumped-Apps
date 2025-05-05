@interface BDPreloadMonitor : NSObject
@property (nonatomic) NSMutableDictionary sceneInfos;
@property (nonatomic) NSMutableDictionary trackInfos;
- (id)sceneInfos;
- (void)setSceneInfos:;
- (void)setTrackInfos:;
- (id)trackInfos;
- (void)trackPreloadWithKey:scene:trafficSize:error:extra:;
- (void)push:;
- (id)init;
- (void)popAll;
- (void).cxx_destruct;
- (void)monitor;
- (void)startMonitor;
- (void)pop:;
+ (void)trackPreloadWithKey:scene:;
+ (void)trackPreloadWithKey:scene:error:;
+ (void)trackPreloadWithKey:scene:trafficSize:error:extra:;
+ (void)trackPreloadWithKey:scene:trafficSize:extra:;
+ (void)push:;
+ (id)sharedInstance;
+ (void)popAll;
+ (void)pop:;
@end
