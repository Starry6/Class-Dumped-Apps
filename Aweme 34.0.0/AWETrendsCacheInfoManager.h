@interface AWETrendsCacheInfoManager : NSObject
@property (nonatomic) NSMutableDictionary trendsCollectStatusCache;
- (id)trendsCollectStatusForTrendsID:;
- (void)trendCollectedStatusChangeed:;
- (id)trendsCollectStatusCache;
- (void)setTrendsCollectStatusCache:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
