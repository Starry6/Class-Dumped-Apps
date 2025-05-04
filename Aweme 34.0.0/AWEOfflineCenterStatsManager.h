@interface AWEOfflineCenterStatsManager : NSObject
+ (void)uploadStatsIfNeed;
+ (void)uploadStatsWithItemID:;
+ (void)recordVideoPlayWithModel:;
@end
