@interface AWEFeedHotSpotChannelConfig : NSObject
+ (BOOL)enableWidgetPreload;
+ (unsigned long long)hotSpotChannelPressPreloadType;
+ (unsigned long long)hotSpotChannelAwemePreloadType;
+ (id)hotspotChannelDataPreloadMethodConfig;
+ (id)otherPreloadMethods;
+ (BOOL)enableOtherMethodPreload;
+ (BOOL)hitPreload;
+ (BOOL)enableSkyLightShowEarly;
+ (BOOL)enableUseCache;
+ (long long)cacheExpiredTimeLimit;
+ (BOOL)enableCacheVideoDownload;
+ (BOOL)enablePlayBeforeCompletion;
+ (BOOL)enableUpdateSkylightOnlyRefresh;
+ (BOOL)enablePlayBeforeSkylightShow;
+ (BOOL)enableSkyLightDataRequestBeforeConfigUI;
+ (BOOL)enableAwemeDataRequestEarly;
+ (id)getLynxViewBackgroundConfig;
+ (double)hotspotChannelFirstCellPreloadDelay;
+ (BOOL)enableCacheAddLog;
+ (BOOL)enablePreloadUseMonitorInEnterChannel;
+ (BOOL)enableGuidePreload;
+ (BOOL)enableAsynCleanDynamicCache;
+ (BOOL)enableCallPlayAdvance;
+ (BOOL)enableCreateCellWhileWillAppear;
+ (BOOL)enableChannelCodeOptimize;
@end
