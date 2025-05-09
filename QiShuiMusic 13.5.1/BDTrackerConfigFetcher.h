@interface BDTrackerConfigFetcher : NSObject
@property (nonatomic) q fetchInterval;
@property (nonatomic) NSString eventListPath;
@property (nonatomic) BOOL needUpdateConfig;
@property (nonatomic) BOOL eventFilterEnabled;
@property (nonatomic) BOOL isUpdatingConfig;
@property (nonatomic) q startTimestamp;
@property (nonatomic) Q sqlAllowedFailCount;
@property (nonatomic) Q sqlAllowedContinuousFailCount;
@property (nonatomic) BOOL useSQLFallbackCache;
@property (nonatomic) Q SQLFallbackCacheSize;
@property (nonatomic) NSArray closingV1EventList;
- (unsigned long long)SQLFallbackCacheSize;
- (void)_configureTracker:;
- (void)checkIntervalAndStartFetch;
- (id)closingV1EventList;
- (BOOL)eventFilterEnabled;
- (id)eventListPath;
- (BOOL)isUpdatingConfig;
- (void)loadBlockList;
- (BOOL)needUpdateConfig;
- (void)setClosingV1EventList:;
- (void)setEventFilterEnabled:;
- (void)setEventListPath:;
- (void)setIsUpdatingConfig:;
- (void)setNeedUpdateConfig:;
- (void)setSQLFallbackCacheSize:;
- (void)setSqlAllowedContinuousFailCount:;
- (void)setSqlAllowedFailCount:;
- (void)setUseSQLFallbackCache:;
- (unsigned long long)sqlAllowedContinuousFailCount;
- (unsigned long long)sqlAllowedFailCount;
- (void)startFetchTrackerConfiguration;
- (void)traceFetchResultState:;
- (void)turnOffEventFilter;
- (void)turnOnEventFilter;
- (BOOL)useSQLFallbackCache;
- (id)init;
- (long long)startTimestamp;
- (void)setStartTimestamp:;
- (void).cxx_destruct;
- (long long)fetchInterval;
- (void)setFetchInterval:;
+ (id)sharedInstance;
@end
