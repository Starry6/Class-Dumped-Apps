@interface AWETeenProfilePreloadABSettings : NSObject
+ (id)preloadSize;
+ (id)preloadConfig;
+ (BOOL)preloadedBanPreload;
+ (BOOL)bitrateSelectOnce;
+ (BOOL)bitrateUseUpdateConfig;
+ (BOOL)profileOuterPreloadAfterChangeTab;
+ (BOOL)profileOuterPreloadCancelWillDisAppear;
+ (BOOL)profileOuterPreloadCancelWhenLeave;
+ (BOOL)profileOuterPreloadEnable;
+ (id)profileOuterPreloadAfterDelay;
+ (BOOL)profileOuterPreloadAfterRefresh;
+ (BOOL)profileOuterPreloadAfterLoadMore;
+ (id)profilePreloadConfig;
+ (id)profileOuterPreloadCellDisplayPercent;
+ (BOOL)profileOuterPreloadRestartWhenScrollTop;
+ (BOOL)profileOuterPreloadWifiOnly;
+ (long long)profileOuterPreloadParallelCount;
@end
