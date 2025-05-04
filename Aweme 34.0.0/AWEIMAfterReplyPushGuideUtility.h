@interface AWEIMAfterReplyPushGuideUtility : NSObject
+ (double)p_lastRequestTimeStamp;
+ (double)p_lastShowTime;
+ (void)p_setNotClickCount:;
+ (long long)p_notClickCount;
+ (void)p_setLastRequestTime:;
+ (void)p_setLastShowTime:;
+ (id)p_lastTimeKey;
+ (id)p_notClickCountKey;
+ (id)p_lastShowTimeKey;
+ (BOOL)canReqeustPsort;
+ (BOOL)canShowQuickReplyPushGuideFloatingViewToSecUid:;
+ (void)fetchPushGuideSettingFromPsortWithStyle:complete:;
+ (void)didRequestPsort;
+ (void)didShowPushGuide;
+ (void)didClickPushGuide;
@end
