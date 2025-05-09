@interface AWEIronManPerfDispatcher : NSObject
@property (nonatomic) BOOL hitWindowOpt;
@property (nonatomic) NSInteger prevMaxCacheCount;
@property (nonatomic) NSDictionary memPerf;
@property (nonatomic) BOOL disableTracker;
@property (nonatomic) BOOL enableFeedPerf;
@property (nonatomic) NSDictionary nunkiPerf;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDisableTracker:;
- (BOOL)disableTracker;
- (void)viewWillAppear:uniqueID:;
- (void)applicationLoadFinishWithUniqueID:error:content:extraParams:;
- (void)applicationFirstFrameDidShow:;
- (void)applicationSCFirstFrameDidShow:;
- (void)applicationWorkBeforeCloseWithUniqueID:;
- (void)applicationTaskAndCommonReadyWithUniqueID:bootManager:isColdBoot:;
- (BOOL)hitWindowOpt;
- (id)memPerf;
- (void)setPrevMaxCacheCount:;
- (int)prevMaxCacheCount;
- (id)nunkiPerf;
- (BOOL)enableFeedPerf;
- (void)setHitWindowOpt:;
- (BOOL)enablePreloadWhenLaunching;
- (void)releasePreload:;
- (void)enableFeedPlayerPerf:;
- (void)reportData:;
- (void)tryReduceWarmCache:;
- (void)enableNunkiPerf:;
- (void)informAwemeReloadTabBar:;
- (void)preloadApp:;
- (void)tryRecoverWarmCache:;
- (void)setMemPerf:;
- (void)setEnableFeedPerf:;
- (void)setNunkiPerf:;
- (id)init;
- (void)applicationDidFinishLaunching:;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;
@end
