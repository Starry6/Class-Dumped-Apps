@interface AWESearchCommonChainMonitor : NSObject
@property (nonatomic) NSMutableDictionary smartSceneTrackInfo;
- (void)startMonitorWithSmartTask:BusinessName:channel:scene:searchID:extraData:;
- (void)finishMonitorWithSmartTask:WithStatus:data:;
- (void)updateInfoWithSmartTask:WithStatus:data:;
- (void)trackMonitorWithStatus:data:;
- (id)smartSceneTrackInfo;
- (void)setSmartSceneTrackInfo:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
