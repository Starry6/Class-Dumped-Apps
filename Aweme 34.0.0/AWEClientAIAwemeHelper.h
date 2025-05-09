@interface AWEClientAIAwemeHelper : NSObject
@property (nonatomic) NSString playbackStateTimingStr;
@property (nonatomic) NSMapTable strongToWeakObjectsMapTable;
@property (nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> hotFeedVC;
@property (nonatomic) NSCache cachedSizeDatas;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAwemeModel;
- (id)hotFeedAwemeModel;
- (id)_getDataSourceWithFeedVC:;
- (id)_getCurrentAwemeModelWithFeedVC:;
- (id)cachedSizeDatas;
- (long long)innerCacheSizeForVideoID:urlKey:;
- (id)playbackStateTimingStr;
- (void)updateCachedAwemeModel:;
- (void)onDataCollector:collectData:;
- (id)getAwemeModelWithItemID:;
- (id)hotFeedDataSource;
- (long long)cachedSizeForModel:;
- (long long)videoSizeForModel:;
- (void)setPlaybackStateTimingStr:;
- (void)setStrongToWeakObjectsMapTable:;
- (id)hotFeedVC;
- (void)setHotFeedVC:;
- (void)setCachedSizeDatas:;
- (id)init;
- (id)currentDataSource;
- (void).cxx_destruct;
- (id)strongToWeakObjectsMapTable;
+ (id)getABConfigMap;
+ (id)cachedSizeDatas;
+ (id)sharedInstance;
@end
