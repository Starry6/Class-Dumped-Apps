@interface AWEConcernSettingsManager : NSObject
+ (long long)followListRecommendCountToPermanentlyClose;
+ (long long)followListRecommendDaysToReappearAfterClosed;
+ (BOOL)shouldLimitFansCount:userId:;
+ (BOOL)followListSyncUserFollowStatusFixEnabel;
+ (id)bellPushFunctionGuideSettings;
+ (id)followFeedFakeRefreshSettings;
+ (BOOL)coldLaunchCacheDownloadVideoEnable;
+ (BOOL)recommendCardSmallScreenUIFixEnable;
+ (id)livingPageSchema;
+ (id)unfollowPageSchema;
+ (id)ecomShopPageSchema;
+ (id)relationListRemindEntranceUrl;
+ (id)recommendCardBackgroundMusicUrl;
+ (long long)isFollowFeedPullRequstsOptimized;
@end
