@interface AWEGrouponPreloadManager : NSObject
@property (nonatomic) <AWEHttpTask> currentRequestTask;
@property (nonatomic) <AWEGrouponTransformerSettingManagerProtocol> nearbySettingManager;
@property (nonatomic) <AWEGrouponTransformerSettingManagerProtocol> grouponSettingManager;
@property (nonatomic) BOOL isVideoPreFetch;
@property (nonatomic) NSDictionary commonData;
@property (nonatomic) BOOL frencEnable;
@property (nonatomic) BOOL frencEnd;
@property (nonatomic) BOOL commonDataEnd;
@property (nonatomic) BOOL loadGrouponLocalCacheEnd;
@property (nonatomic) AWEGrouponCacheLoadV2Config managerConfig;
@property (nonatomic) NSMutableDictionary cachedDataModels;
@property (nonatomic) BOOL isNearbyRequestOnAir;
@property (nonatomic) BOOL isGrouponRequestOnAir;
@property (nonatomic) NSMutableArray homepageRequestTaskQueue;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (BOOL)isRequestOnAir;
- (void)fetchSettings;
- (void)setCommonData:;
- (id)commonData;
- (id)managerConfig;
- (void)setManagerConfig:;
- (void)initProperty;
- (id)currentRequestTask;
- (void)setCurrentRequestTask:;
- (void)handleAllDataModelWithBlk:;
- (void)userL3locationChanged;
- (void)startWithNearbyCommonData:;
- (void)cleanPreload:;
- (BOOL)hasSaaSFeedInListResponse:;
- (id)filterDataWithAwemeList:;
- (void)startWithFenceType:;
- (void)prefetchNearbyLifeResource;
- (void)loadGrouponFeedCacheCompletion:;
- (BOOL)enableDualLocalCache:;
- (void)setLoadGrouponLocalCacheEnd:;
- (void)loadGrouponCacheWithConfig:completion:;
- (void)loadGrouponLocalCacheToMemory;
- (void)setCachedDataModels:;
- (id)cachedDataModels;
- (id)cachedDataModelWithType:;
- (void)setupDualSettingWithType:;
- (BOOL)canNotUsePreload;
- (void)loadFeedRefreshCacheWithCacheModel:dataType:completion:;
- (void)preprocessCacheData:cacheModel:dataFrom:dataType:;
- (void)trackerCacheUse:message:isPreloadCache:cacheType:dataType:;
- (BOOL)loadGrouponLocalCacheEnd;
- (void)handleGrouponCacheLoadV2ConfigWithCache:;
- (void)asyncGetGrouponFeedCache:;
- (void)setCommonDataEnd:;
- (void)preloadTransformerIfNeed;
- (void)setFrencEnable:;
- (void)setFrencEnd:;
- (long long)preModeToDatType:;
- (id)allDualCacheModels;
- (void)loadNeabryDualFeedCacheCompletion:;
- (void)handleDualListResponseBeforeUseWithCacheModel:dataType:completion:;
- (void)startPreRequest:;
- (void)trackPreRequestUnavailable:errorMessage:;
- (void)enablePreload:cacheModel:completion:;
- (void)getDualPreloadLocalDataWithCacheModel:completion:;
- (id)nearbySettingManager;
- (void)setNearbySettingManager:;
- (id)grouponSettingManager;
- (void)setGrouponSettingManager:;
- (BOOL)isVideoPreFetch;
- (void)setIsVideoPreFetch:;
- (BOOL)frencEnable;
- (BOOL)frencEnd;
- (BOOL)commonDataEnd;
- (BOOL)isNearbyRequestOnAir;
- (void)setIsNearbyRequestOnAir:;
- (BOOL)isGrouponRequestOnAir;
- (void)setIsGrouponRequestOnAir:;
- (id)homepageRequestTaskQueue;
- (void)setHomepageRequestTaskQueue:;
- (id)init;
- (void)addObserver;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
