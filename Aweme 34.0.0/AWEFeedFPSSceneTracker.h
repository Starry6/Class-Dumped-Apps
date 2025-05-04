@interface AWEFeedFPSSceneTracker : NSObject
- (void)switchToAweme:pageExtension:;
- (void)switchFromAweme:toAweme:up:preloaded:;
- (BOOL)shouldMonitorDanmakuWithModel:;
- (id)sceneNameWithAweme:;
- (void)switchToAweme:;
- (BOOL)shouldAddAdExtraInfoWith:;
- (void)switchToAweme:pageType:;
- (void).cxx_destruct;
+ (id)trackerWithMetric:;
@end
