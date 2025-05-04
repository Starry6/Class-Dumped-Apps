@interface AWEDouYinSouSuoDisplayedGuideInfoManager : NSObject
@property (nonatomic) AWEStorage cache;
@property (nonatomic) AWEDouYinSouSuoDisplayedGuideInfo displayedGuideInfo;
@property (nonatomic) q displayedCount;
- (id)displayedGuideInfo;
- (void)setDisplayedGuideInfo:;
- (void)loadCacheIfNeed;
- (void)clearCacheIfNeed;
- (BOOL)hasDisplayedGuideForAweme:;
- (void)markGuideHasDisplayedForAweme:;
- (void)refreshCacheIfNeed;
- (id)cache;
- (id)init;
- (void)updateCache;
- (void).cxx_destruct;
- (BOOL)shouldClearCache;
- (long long)displayedCount;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
