@interface PuzzleSettingManager : NSObject
- (id)abMonitorContext;
- (void)addPrivateDomains:;
- (id)commonGlobalPropertiesWithURL:routerParams:context:;
- (void)configPrivateDomains:;
- (BOOL)disableRegularMatchInAllowList;
- (BOOL)disableResetNaviBarHidden;
- (BOOL)disableWebURLIntercept;
- (BOOL)enableDefaultForestPreload;
- (unsigned long long)enableForestHttpHeader;
- (unsigned long long)enableForestLooseLimit;
- (BOOL)enableForestStreamLoad;
- (BOOL)enableLatch;
- (BOOL)enableLatchAheadToHandleSchema;
- (BOOL)forbidObservingScreenshotNotification;
- (id)forestWebResourceAllowList;
- (BOOL)globalPropsLazyLoadDisable;
- (BOOL)inAllowListWith:;
- (BOOL)inFontScaleListWith:;
- (BOOL)isInHybridKitBlockList:;
- (BOOL)isOfflineForURL:;
- (BOOL)isPIAEnabled;
- (BOOL)isPerformanceMonitorEnabled;
- (BOOL)jsbLazyLoadEnable;
- (id)jsbPvAllowList;
- (id)liveAnnieForestWebExperimentConfig;
- (id)liveAnnieLatchCDNExperimentConfig;
- (id)liveAnnieWebViewTerminateRescuerConfig;
- (id)offlineMetaForURL:;
- (BOOL)piaNotUsePuzzleLifeCycle;
- (BOOL)skipLynxImageForestMonitor;
- (BOOL)topLevelOptimizeEnable;
- (id)userAgent;
- (id)allowList;
+ (id)sharedManager;
@end
