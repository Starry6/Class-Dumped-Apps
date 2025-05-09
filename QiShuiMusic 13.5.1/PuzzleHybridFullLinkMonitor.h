@interface PuzzleHybridFullLinkMonitor : NSObject
@property (nonatomic) <PuzzleHybridMonitorReporter> reporter;
@property (nonatomic) <AnnieTraceEventProtocol> traceEvent;
@property (nonatomic) <PuzzleLogServiceProtocol> tracker;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString url;
@property (nonatomic) q openTime;
@property (nonatomic) q realOpenTime;
@property (nonatomic) q containerInitStartTime;
@property (nonatomic) q prepareInitDataStartTime;
@property (nonatomic) q prepareInitDataEndTime;
@property (nonatomic) q containerInitEndTime;
@property (nonatomic) q prepareComponentStartTime;
@property (nonatomic) q prepareComponentJSBStartTime;
@property (nonatomic) q prepareComponentJSBEndTime;
@property (nonatomic) q prepareComponentEndTime;
@property (nonatomic) q prepareCardLoadStartTime;
@property (nonatomic) q prepareRenderDataStartTime;
@property (nonatomic) q prepareComponentGlobalPropsStartTime;
@property (nonatomic) q prepareComponentGlobalPropsEndTime;
@property (nonatomic) q prepareComponentInitialPropsStartTime;
@property (nonatomic) q prepareComponentInitialPropsEndTime;
@property (nonatomic) q prepareRenderDataEndTime;
@property (nonatomic) q prepareTemplateStartTime;
@property (nonatomic) q prepareTemplateEndTime;
@property (nonatomic) q prepareEngineLoadStartTime;
@property (nonatomic) q prepareEngineLoadEndTime;
@property (nonatomic) q checkAuditStatusStartTime;
@property (nonatomic) q checkAuditStatusEndTime;
@property (nonatomic) q resolveShortLinkStartTime;
@property (nonatomic) q resolveShortLinkEndTime;
@property (nonatomic) @ isPreRender;
@property (nonatomic) @ isContainerPreload;
@property (nonatomic) NSString containerType;
@property (nonatomic) NSString pageType;
@property (nonatomic) Q keneralType;
@property (nonatomic) BOOL isFirstOpen;
@property (nonatomic) BOOL isLynxFirstOpen;
@property (nonatomic) BOOL isWebFirstOpen;
@property (nonatomic) BOOL hasSetRealOpenTime;
@property (nonatomic) NSArray jsbPvAllowList;
@property (nonatomic) BOOL enableMonitorPrefetch;
@property (nonatomic) double prefetchStartTime;
@property (nonatomic) NSString pageSCMVersion;
@property (nonatomic) NSString pageOfflineVersion;
@property (nonatomic) NSString templateResType;
@property (nonatomic) BOOL reuseRawView;
@property (nonatomic) BOOL jsbLazyLoad;
@property (nonatomic) BOOL enableForest;
@property (nonatomic) q webRLMode;
@property (nonatomic) q webForestMode;
@property (nonatomic) @ puzzleContext;
@property (nonatomic) BOOL enableLatchMatchReport;
@property (nonatomic) q desireLatchResMode;
@property (nonatomic) q mainDocSourceType;
@property (nonatomic) q mainDocVersion;
@property (nonatomic) q latchInitJsSourceType;
@property (nonatomic) q latchInitJsVersion;
@property (nonatomic) q prefetchJsSourceType;
@property (nonatomic) q prefetchJsVersion;
@property (nonatomic) NSString containerMonitorID;
- (void)invalidateData:;
- (BOOL)isLynxFirstOpen;
- (void)recordOpenTime:;
- (void)recordPageType:;
- (void)recordPrepareInitDataStartTime:;
- (void)recordResolveShortLinkStartTime;
- (void)reportContainerError:url:withErrorPhase:errorPosition:errorMsg:;
- (void)reportWebViewRedirectNavigation;
- (void)setIsFirstOpen:;
- (void)attachLynxView:;
- (void)detachLynxView:;
- (void)recordCheckAuditStatusStartTime;
- (void)reportEngineviewRenderStartTime;
- (void)reportPrepareComponentStartTime;
- (void)setIsPreRender:;
- (void)setJsbLazyLoad:;
- (void)setKeneralType:;
- (id)templateResType;
- (void)attachWebView:;
- (void)bindCrashInfoWithUrl:schema:;
- (long long)checkAuditStatusEndTime;
- (long long)checkAuditStatusStartTime;
- (long long)containerInitEndTime;
- (long long)containerInitStartTime;
- (id)containerMonitorID;
- (long long)desireLatchResMode;
- (void)detachWebView:;
- (BOOL)enableForest;
- (BOOL)enableLatchMatchReport;
- (BOOL)enableMonitorPrefetch;
- (id)getCustomPerformanceTiming:;
- (id)getOriginalScheme;
- (void)getPerformanceTiming:level:waitCompleteData:completion:;
- (BOOL)hasSetRealOpenTime;
- (id)initWithReporter:withContext:;
- (id)isContainerPreload;
- (BOOL)isFirstOpen;
- (id)isPreRender;
- (BOOL)isWebFirstOpen;
- (BOOL)jsbLazyLoad;
- (id)jsbPvAllowList;
- (unsigned long long)keneralType;
- (long long)latchInitJsSourceType;
- (long long)latchInitJsVersion;
- (long long)mainDocSourceType;
- (long long)mainDocVersion;
- (long long)openTime;
- (id)pageOfflineVersion;
- (id)pageSCMVersion;
- (long long)prefetchJsSourceType;
- (long long)prefetchJsVersion;
- (double)prefetchStartTime;
- (long long)prepareCardLoadStartTime;
- (long long)prepareComponentEndTime;
- (long long)prepareComponentGlobalPropsEndTime;
- (long long)prepareComponentGlobalPropsStartTime;
- (long long)prepareComponentInitialPropsEndTime;
- (long long)prepareComponentInitialPropsStartTime;
- (long long)prepareComponentJSBEndTime;
- (long long)prepareComponentJSBStartTime;
- (long long)prepareComponentStartTime;
- (long long)prepareEngineLoadEndTime;
- (long long)prepareEngineLoadStartTime;
- (long long)prepareInitDataEndTime;
- (long long)prepareInitDataStartTime;
- (long long)prepareRenderDataEndTime;
- (long long)prepareRenderDataStartTime;
- (long long)prepareTemplateEndTime;
- (long long)prepareTemplateStartTime;
- (id)puzzleContext;
- (long long)realOpenTime;
- (void)recordCheckAuditStatusEndTime;
- (void)recordIsContainerPreload:;
- (void)recordIsPreRender:;
- (void)recordOpenTime:scheme:prepareInitDataStartTime:prepareInitDataEndTime:;
- (void)recordPrepareInitDataEndTime:;
- (void)recordResolveShortLinkEndTime;
- (void)recordScheme:;
- (void)recordWithParams:;
- (void)repairMonitorContextForReusedView:;
- (void)reportContainerCloseEndTime;
- (void)reportContainerInitEndTime;
- (void)reportContainerLoadTrackEvent:containerType:;
- (void)reportContainerLoadUrlStartTrace;
- (void)reportContainerPerformanceWithURL:kernalType:moment:container:context:;
- (void)reportContainerPrepareTimeBeforePrefetchWithDuration:prefetchType:;
- (void)reportContainerUrl:;
- (void)reportContainerViewDidAppear;
- (void)reportContainerViewDidLoad;
- (void)reportCustomPerformanceTiming;
- (void)reportEngineViewLoadEndTime;
- (void)reportEngineViewLoadStartTime;
- (void)reportFallbackErrorCode:;
- (void)reportFallbackErrorMsg:;
- (void)reportFallbackUrl:;
- (void)reportInvokeFallback:;
- (void)reportInvokeFallback:fallbackUrl:code:msg:;
- (void)reportIsFallback:;
- (void)reportJSBridgeTrackEvent:params:code:url:;
- (void)reportLatchResVersionMatch;
- (void)reportLoadScene:;
- (void)reportOpenTime;
- (void)reportPrefetchCallbackIfNeeded;
- (void)reportPrefetchStartIfNeededWithUrl:;
- (void)reportPrepareCardLoadStartTime;
- (void)reportPrepareComponentEndTime;
- (void)reportPrepareComponentGlobalPropsEndTime;
- (void)reportPrepareComponentGlobalPropsStartTime;
- (void)reportPrepareComponentInitialPropsEndTime;
- (void)reportPrepareComponentInitialPropsStartTime;
- (void)reportPrepareComponentJSBEndTime;
- (void)reportPrepareComponentJSBStartTime;
- (void)reportPrepareEngineLoadEndTime;
- (void)reportPrepareEngineLoadStartTime;
- (void)reportPrepareRenderDataEndTime;
- (void)reportPrepareRenderDataStartTime;
- (void)reportPrepareTemplateEndTime;
- (void)reportPrepareTemplateStartTime;
- (void)reportRealOpenTime:;
- (void)reportRecordedDataWhenContainerInitStart;
- (void)reportSlardarHybrid:data:logLevel:;
- (void)reportTemplateResType:;
- (void)reportUserOpenTime:;
- (void)reportWebViewCommitNavigation;
- (void)reportWebViewDecideNavigation;
- (void)resetContainerMonitorID:;
- (void)resetOpenTimeToNow;
- (long long)resolveShortLinkEndTime;
- (long long)resolveShortLinkStartTime;
- (BOOL)reuseRawView;
- (void)setCheckAuditStatusEndTime:;
- (void)setCheckAuditStatusStartTime:;
- (void)setContainerInitEndTime:;
- (void)setContainerInitStartTime:;
- (void)setDesireLatchResMode:;
- (void)setEnableForest:;
- (void)setEnableLatchMatchReport:;
- (void)setEnableMonitorPrefetch:;
- (void)setHasSetRealOpenTime:;
- (void)setIsContainerPreload:;
- (void)setIsLynxFirstOpen:;
- (void)setIsWebFirstOpen:;
- (void)setJsbPvAllowList:;
- (void)setLatchInitJsSourceType:;
- (void)setLatchInitJsVersion:;
- (void)setMainDocSourceType:;
- (void)setMainDocVersion:;
- (void)setMonitorFieldMap:;
- (void)setOpenTime:;
- (void)setPageOfflineVersion:;
- (void)setPageSCMVersion:;
- (void)setPerformanceTiming:withValue:withKey:;
- (void)setPrefetchJsSourceType:;
- (void)setPrefetchJsVersion:;
- (void)setPrefetchStartTime:;
- (void)setPrepareCardLoadStartTime:;
- (void)setPrepareComponentEndTime:;
- (void)setPrepareComponentGlobalPropsEndTime:;
- (void)setPrepareComponentGlobalPropsStartTime:;
- (void)setPrepareComponentInitialPropsEndTime:;
- (void)setPrepareComponentInitialPropsStartTime:;
- (void)setPrepareComponentJSBEndTime:;
- (void)setPrepareComponentJSBStartTime:;
- (void)setPrepareComponentStartTime:;
- (void)setPrepareEngineLoadEndTime:;
- (void)setPrepareEngineLoadStartTime:;
- (void)setPrepareInitDataEndTime:;
- (void)setPrepareInitDataStartTime:;
- (void)setPrepareRenderDataEndTime:;
- (void)setPrepareRenderDataStartTime:;
- (void)setPrepareTemplateEndTime:;
- (void)setPrepareTemplateStartTime:;
- (void)setPuzzleContext:;
- (void)setRealOpenTime:;
- (void)setResolveShortLinkEndTime:;
- (void)setResolveShortLinkStartTime:;
- (void)setReuseRawView:;
- (void)setTemplateResType:;
- (void)setTraceEvent:;
- (void)setWebForestMode:;
- (void)setWebRLMode:;
- (id)traceEvent;
- (long long)webForestMode;
- (long long)webRLMode;
- (void)writeContextALog;
- (void)setTracker:;
- (id)url;
- (void)setScheme:;
- (id)tracker;
- (id)scheme;
- (void)setReporter:;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setPageType:;
- (id)pageType;
- (id)reporter;
- (void)deleteData:;
- (id)containerType;
- (void)setContainerType:;
+ (id)create:;
@end
