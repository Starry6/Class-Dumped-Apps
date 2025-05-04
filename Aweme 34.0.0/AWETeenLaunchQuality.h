@interface AWETeenLaunchQuality : NSObject
+ (double)p_processStartTime;
+ (BOOL)p_processInfoForPID:procInfo:;
+ (void)startPlayVideo;
+ (BOOL)isSystemBackgroundLaunch;
+ (id)sectionDict;
+ (id)lastSubScene;
+ (BOOL)hasColdStart;
+ (double)reviseProcessRealStartTime;
+ (void)didColdStart;
+ (void)endLaunchSceneWithSubName:;
+ (void)failLaunchSceneWithSubName:isNetworkError:message:errorCode:;
+ (void)cancleLaunchSceneWithSubName:data:;
+ (double)reviseProcessStartTime:;
+ (id)dataCacheManager;
+ (void)changeLastSubScene:;
+ (void)startLaunchSceneWithSubName:;
+ (void)cancleLaunchSceneWithSubName:;
+ (void)changeStartDuration:;
+ (void)startFeedApi;
+ (void)endFeedApi;
+ (void)endPlayVideo;
+ (void)resetLaunchChangeScene;
@end
