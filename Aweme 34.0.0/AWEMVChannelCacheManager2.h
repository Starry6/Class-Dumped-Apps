@interface AWEMVChannelCacheManager2 : NSObject
@property (nonatomic) AWEMVChannelDataController networkControllerForCache;
@property (nonatomic) AWEMVChannelDataController networkControllerForLaunchTask;
@property (nonatomic) AWEMVChannelPageContext pageContext;
@property (nonatomic) AWEMVChannelCacheInfoModel cacheInfo;
@property (nonatomic) AWEAwemeResponseModel cacheModel;
@property (nonatomic) BOOL readingCache;
@property (nonatomic) NSMutableArray acquireBlockList;
@property (nonatomic) AWEAwemeResponseModel lastResponseModel;
@property (nonatomic) AWEMVChannelCacheInfoModel lastResponseCacheInfo;
@property (nonatomic) AWEMediumVideoChannelCachePreloadModel lastPreloadVideoModel;
@property (nonatomic) NSString needClearVideoCacheUrlKey;
@property (nonatomic) NSTimer requestCacheTimer;
@property (nonatomic) BOOL requestCacheAlready;
@property (nonatomic) AWEAwemeResponseModel unconsumedFeedCacheModel;
@property (nonatomic) AWEMVChannelCacheInfoModel unconsumedFeedCacheInfo;
@property (nonatomic) NSArray tempRefreshAwemeList;
@property (nonatomic) AWEAwemeResponseModel lastRefreshResponseModel;
@property (nonatomic) AWEMVChannelCacheInfoModel lastRefreshFeedCacheInfo;
@property (nonatomic) q refreshResponseSaveTimes;
@property (nonatomic) @? refreshResponseSaveBlock;
@property (nonatomic) AWEStorageFilePermanent filePermanent;
@property (nonatomic) AWEStorage infoStorage;
@property (nonatomic) Q errorCode;
@property (nonatomic) BOOL isAcquireCacheImmediately;
@property (nonatomic) BOOL resignActive;
@property (nonatomic) q acquireCacheFrequencyForLog;
@property (nonatomic) BOOL isReuse;
@property (nonatomic) BOOL didLoadChannel;
@property (nonatomic) BOOL didLeaveChannel;
@property (nonatomic) BOOL cacheIsUsed;
- (double)cacheTime;
- (void)readObjectFromFileForKey:completion:;
- (void)setCacheInfo:;
- (BOOL)isReuse;
- (void)setIsReuse:;
- (id)cacheItemIds;
- (void)loginStateChanged;
- (void)handleWillResignActive;
- (id)lastResponseModel;
- (void)setLastResponseModel:;
- (void)initialCacheInfo;
- (void)setupErrorCode:;
- (id)infoStorage;
- (unsigned long long)getErrorCodeFromStorage;
- (void)setupCacheInfo;
- (void)saveLastResponseToDisk:;
- (id)lastRefreshResponseModel;
- (id)lastRefreshFeedCacheInfo;
- (void)saveCacheToDisk:cacheInfo:;
- (id)refreshResponseSaveBlock;
- (void)setRefreshResponseSaveBlock:;
- (void)requestFeedCacheWithRequestType:;
- (void)innerCheckCacheInLaunchIdleTask;
- (BOOL)didLoadChannel;
- (BOOL)checkCacheNeedUpdate;
- (void)setLastResponseCacheInfo:;
- (void)requestFeedCacheWithCompletion:beforeSaveHandler:cacheRequestType:forceRequest:;
- (void)queryOutsideSceneStrategyWithRetryTimes:completion:;
- (id)lastResponseCacheInfo;
- (void)updateAfterRemoveDuplication:needRefresh:;
- (void)updateLastResponseModelAndCacheInfo:cacheRequestType:;
- (id)requestCacheTimer;
- (void)requestFeedCacheInTimer;
- (void)setRequestCacheTimer:;
- (BOOL)didLeaveChannel;
- (BOOL)requestCacheAlready;
- (void)setRequestCacheAlready:;
- (void)_requestFeedCacheWithRequestType:enableStrategyQuery:retryTimes:;
- (void)_retryRequestFeedCache:;
- (id)networkControllerForLaunchTask;
- (id)networkControllerForCache;
- (void)storageErrorCode:;
- (void)filterLiveCard:;
- (void)preloadImage:scene:;
- (void)preloadVideo:timingType:;
- (BOOL)readingCache;
- (id)acquireBlockList;
- (void)setReadingCache:;
- (void)handleAcquireBlockList:error:;
- (void)readCacheFromDiskWithBlock:;
- (void)setAcquireBlockList:;
- (void)bindPreloadVideoModel:;
- (void)setUnconsumedFeedCacheInfo:;
- (void)setUnconsumedFeedCacheModel:;
- (id)filePermanent;
- (id)unconsumedFeedCacheModel;
- (long long)refreshResponseSaveTimes;
- (void)setTempRefreshAwemeList:;
- (void)setLastRefreshResponseModel:;
- (void)setLastRefreshFeedCacheInfo:;
- (void)setRefreshResponseSaveTimes:;
- (id)tempRefreshAwemeList;
- (void)trySaveRefreshedFeedData:;
- (void)clearStorageErrorCode;
- (id)needClearVideoCacheUrlKey;
- (void)setNeedClearVideoCacheUrlKey:;
- (id)acquireLastPreloadVideoModel;
- (void)removePreloadVideoModel;
- (void)savePreloadVideoModel:;
- (id)lastPreloadVideoModel;
- (void)setLastPreloadVideoModel:;
- (void)setIsAcquireCacheImmediately:;
- (void)setAcquireCacheFrequencyForLog:;
- (long long)acquireCacheFrequencyForLog;
- (id)trackParamsForCache;
- (BOOL)isAcquireCacheImmediately;
- (id)unconsumedFeedCacheInfo;
- (BOOL)cacheIsUsed;
- (void)outFlowRemoveDuplication:;
- (void)innerFlowRemoveDuplication:;
- (void)triggerRequestFeedCache;
- (BOOL)cacheAvailable;
- (id)getStartPlayTimeWithItemId:;
- (void)updateStartPlayTimeRecordUsingBlock:;
- (void)setupCacheUsed:;
- (void)acquireCacheWithBlock:;
- (void)trySaveUnconsumedFeedData:timingType:;
- (void)tryFillRefreshedFeedDataByLoadMore:;
- (void)tryClearPreloadVideoCache;
- (void)setupIsAcquireCacheImmediately:;
- (void)recordAcquireCacheFrequency;
- (id)debugInfo:;
- (void)setDidLoadChannel:;
- (void)setDidLeaveChannel:;
- (void)setNetworkControllerForCache:;
- (void)setNetworkControllerForLaunchTask:;
- (void)setFilePermanent:;
- (void)setInfoStorage:;
- (id)init;
- (void)cancelTimer;
- (void)setErrorCode:;
- (unsigned long long)errorCode;
- (void).cxx_destruct;
- (BOOL)resignActive;
- (id)cacheInfo;
- (void)setCacheModel:;
- (void)setPageContext:;
- (id)pageContext;
- (void)setResignActive:;
- (void)startupTimer;
- (id)cacheModel;
- (void)handleDidBecomeActive;
- (void)setupNotification;
+ (id)cacheStorageKey;
+ (void)checkCacheInLaunchIdleTask;
+ (id)shareInstance;
@end
