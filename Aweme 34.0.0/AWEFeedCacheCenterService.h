@interface AWEFeedCacheCenterService : NSObject
@property (nonatomic) NSMutableDictionary trackers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)forceClearWithSceneArray:;
- (void)clearCacheWithTag:;
- (void)updateWithTag:;
- (void)loadCacheWithTag:count:cacheCompletion:;
- (id)availableCacheWithTag:expectCount:;
- (void)clearCacheWithTag:Array:;
- (void)registerTracker:scene:;
- (id)getTrackerWithScene:;
- (void)trackerGlobalNotiWithEvent:tag:param:;
- (id)init;
- (void).cxx_destruct;
- (void)setTrackers:;
- (id)trackers;
+ (id)sharedInstance;
@end
