@interface AWEFeedFirstFrameTrackManager : NSObject
+ (double)p_processStartTime;
+ (BOOL)p_processInfoForPID:procInfo:;
+ (BOOL)isSystemBackgroundLaunch;
+ (void)trackFirstFrameAndTrigerEventWithModel:blockedWithAlertView:;
+ (void)updateIsFirstPlay:;
+ (void)updateFeedHotPageAppeared:;
+ (void)updateFeedHotPageDisappeared:;
+ (BOOL)p_isFromFamiliarCache:;
+ (double)reviseProcessStartTime:;
+ (id)dataCacheManager;
+ (BOOL)hadValidDeatilsWithFirstFrame;
+ (id)p_isFromFamiliarCacheNumber:;
+ (void)awe_feedReadyBootTasksDelay;
+ (id)splashCacheManager;
+ (id)p_isFromFeedCacheNumber:;
+ (long long)firstFrameFeedType;
+ (void)addMetricInfoWithName:start:endTime:metrics:;
+ (void)clearDetailsWithFirstFrame;
+ (id)firstFrameLoadTimeWithModel:blockedWithAlertView:;
+ (id)detailsWithFirstImageLoadTime;
+ (long long)isLiveStream;
+ (BOOL)isFirstPlay;
@end
