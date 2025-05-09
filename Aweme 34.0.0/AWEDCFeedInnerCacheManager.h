@interface AWEDCFeedInnerCacheManager : NSObject
@property (nonatomic) AWEDCFeedInnerCacheConfig config;
@property (nonatomic) NSMutableArray cacheAwemeList;
@property (nonatomic) <AWEEGCDTimerProtocol> timer;
@property (nonatomic) BOOL isTimerSuspended;
- (void)destroyTimer;
- (void)addCommonParams:;
- (id)classNameWithReferString;
- (void)loadCacheAweme;
- (id)receiveInnerCacheModels;
- (void)cacheModelAddTag:;
- (void)removeConsumedCacheModelWithItemID:;
- (void)setCacheAwemeList:;
- (long long)getCacheNum;
- (id)cacheAwemeList;
- (double)getScheduledRefreshTime;
- (void)refreshCacheAweme;
- (id)transferAwemeListIfNeededWithArray:;
- (long long)getCachePoolThreshold;
- (void)setConfig:;
- (void)setupTimer;
- (void)setTimer:;
- (id)timer;
- (id)initWithConfig:;
- (id)config;
- (void)startTimer;
- (void)setIsTimerSuspended:;
- (void).cxx_destruct;
- (BOOL)isTimerSuspended;
- (void)pauseTimer;
- (id)getURL;
@end
