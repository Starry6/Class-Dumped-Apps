@interface AWEFeedDoubleColumnInnerPreloadManager : NSObject
@property (nonatomic) NSMutableArray doubleColumnCacheAwemeList;
@property (nonatomic) <AWEEGCDTimerProtocol> timer;
@property (nonatomic) BOOL isTimerSuspended;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)addCommonParams:;
- (long long)cachePoolThreshold;
- (void)loadCacheAweme;
- (void)removeConsumedCacheModelWithItemID:;
- (void)refreshCacheAweme;
- (id)transferAwemeListIfNeededWithArray:;
- (void)setDoubleColumnCacheAwemeList:;
- (id)doubleColumnCacheAwemeList;
- (id)getValidCacheModelsArrayWithFirstModel:;
- (void)setupTimer;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void)startTimer;
- (void)setIsTimerSuspended:;
- (void).cxx_destruct;
- (id)requestUrl;
- (BOOL)isTimerSuspended;
- (void)pauseTimer;
+ (double)innerCacheRefreshTime;
+ (long long)innerCacheModelNum;
+ (id)sharedInstance;
@end
