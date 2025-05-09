@interface AWEMVChannelPerformanceMonitor : NSObject
@property (nonatomic) double loadBeginTime;
@property (nonatomic) double totalDuration;
@property (nonatomic) double uiBeginTime;
@property (nonatomic) double uiBeginDuration;
@property (nonatomic) double uiDuration;
@property (nonatomic) double netBeginTime;
@property (nonatomic) double netBeginDuration;
@property (nonatomic) double netDuration;
@property (nonatomic) double renderBeginTime;
@property (nonatomic) double renderBeginDuration;
@property (nonatomic) double renderDuration;
@property (nonatomic) double playerBeginTime;
@property (nonatomic) double playerBeginDuration;
@property (nonatomic) double playerDuration;
@property (nonatomic) q hitVideoCacheSize;
@property (nonatomic) NSString provider;
@property (nonatomic) NSNumber feedCount;
@property (nonatomic) BOOL firstCardDidRender;
@property (nonatomic) Q firstCardType;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) Q loadResult;
@property (nonatomic) BOOL hasShowContent;
@property (nonatomic) BOOL isScrollToEnterChannel;
@property (nonatomic) double launchFakeViewStartTime;
@property (nonatomic) double launchFakeViewGenerateTime;
@property (nonatomic) BOOL hasShowSplash;
@property (nonatomic) double bannerRequestBeginTime;
@property (nonatomic) double bannerRequestTotalDuration;
@property (nonatomic) double cacheReadyStartWaitingBannerTime;
@property (nonatomic) double cacheWaitingBannerTotalDuration;
@property (nonatomic) q column;
@property (nonatomic) AWEMVChannelCardPerformanceMonitor card;
@property (nonatomic) Q preloadStatus;
- (id)feedCount;
- (void)startPlay;
- (void)startRender;
- (double)playerDuration;
- (void)setFeedCount:;
- (void)setRenderDuration:;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)startBannerRequest;
- (void)finishBannerRequest;
- (void)finishNetworkWithResponseModel:error:;
- (void)startNetwork;
- (void)startWaitingBannerAfterCacheReady;
- (void)finishWaitingBannerAfterCacheReady;
- (void)splashWillAppearWithAdModelNotification:;
- (void)splashDisappearNotification:;
- (void)setLoadBeginTime:;
- (void)setUiBeginTime:;
- (BOOL)isShowingSplash;
- (void)setHasShowSplash:;
- (double)uiBeginTime;
- (void)setUiDuration:;
- (double)netBeginTime;
- (void)setNetBeginTime:;
- (double)loadBeginTime;
- (void)setNetBeginDuration:;
- (double)netDuration;
- (void)commitLoadResult:;
- (void)setNetDuration:;
- (double)renderBeginTime;
- (void)setRenderBeginDuration:;
- (BOOL)needRecordFinishRender;
- (double)playerBeginTime;
- (void)setPlayerBeginTime:;
- (void)setPlayerBeginDuration:;
- (void)setPlayerDuration:;
- (void)setHitVideoCacheSize:;
- (BOOL)hasShowContent;
- (void)setHasShowContent:;
- (double)renderBeginDuration;
- (double)playerBeginDuration;
- (BOOL)firstCardDidRender;
- (BOOL)isContentCell:;
- (unsigned long long)preloadStatus;
- (void)setFirstCardDidRender:;
- (unsigned long long)cardTypeForCell:;
- (void)setFirstCardType:;
- (void)finishRender;
- (unsigned long long)firstCardType;
- (void)recordHasShowContentCell:;
- (void)setIsScrollToEnterChannel:;
- (void)setLaunchFakeViewStartTime:;
- (void)setLaunchFakeViewGenerateTime:;
- (double)launchFakeViewStartTime;
- (double)launchFakeViewGenerateTime;
- (void)trackPageMonitorIfNeeded;
- (unsigned long long)loadResult;
- (BOOL)hasShowSplash;
- (double)uiBeginDuration;
- (double)uiDuration;
- (double)netBeginDuration;
- (long long)hitVideoCacheSize;
- (double)bannerRequestTotalDuration;
- (double)cacheWaitingBannerTotalDuration;
- (BOOL)isScrollToEnterChannel;
- (id)feedCacheParams;
- (void)setBannerRequestBeginTime:;
- (double)bannerRequestBeginTime;
- (void)setBannerRequestTotalDuration:;
- (void)setCacheReadyStartWaitingBannerTime:;
- (double)cacheReadyStartWaitingBannerTime;
- (void)setCacheWaitingBannerTotalDuration:;
- (void)startLoadUI;
- (void)finishLoadUI;
- (void)finishPlay:;
- (BOOL)hasRequestFinished;
- (double)landingToShowDuration;
- (double)landingToPlayedDuration;
- (void)finishFirstRefresh:;
- (void)firstEnterChannelIsScroll:;
- (void)startShowLaunchFakeView;
- (void)finishGenerateLaunchFakeView;
- (void)dismissLaunchFakeView;
- (void)setUiBeginDuration:;
- (void)setLoadResult:;
- (id)card;
- (id)init;
- (void)setProvider:;
- (double)currentDate;
- (void)setCard:;
- (double)totalDuration;
- (void).cxx_destruct;
- (id)provider;
- (long long)column;
- (void)viewDidDisappear;
- (void)setTotalDuration:;
- (double)renderDuration;
- (void)setHasReported:;
- (BOOL)hasReported;
- (BOOL)hasPlayed;
- (void)setRenderBeginTime:;
- (void)setPreloadStatus:;
- (void)setColumn:;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
@end
