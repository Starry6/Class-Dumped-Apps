@interface AWEECOMIMABTestService : NSObject
+ (BOOL)enableUseTIMXNewStore;
+ (void)registerDetailFoldPrecisionConfig;
+ (void)registerDetailWaitQueueNoticeStyle;
+ (void)registerABExperiments;
+ (double)imTokenCacheMaxAge;
+ (long long)newStoreRollbackPercent;
+ (long long)newStoreDeleteDatabaseVersion;
+ (BOOL)enableDynamicRefactor;
+ (BOOL)enableDynamicCardViewV2Cache;
+ (BOOL)enableLGUIMsgNewStyle;
+ (id)IMShopMsgTabTitleText;
+ (long long)dynamicCardViewV2CacheMaxCount;
+ (long long)chatDetailExtraCardTimeInterval;
+ (id)detailNoticeConfig;
+ (id)detailFoldNormalConfig;
+ (id)detailFoldPrecisionConfigWithExposure:;
+ (long long)detailWaitQueueNoticeStyleWithExposure:;
@end
