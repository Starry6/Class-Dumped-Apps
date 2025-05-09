@interface IESLiveRevenueInteractEntranceCacheManager : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) q repeatClickPredictionCount;
@property (nonatomic) IESLiveRevenueInteractEntranceCache panelAllDataCache;
@property (nonatomic) IESLiveRevenueInteractEntranceCache panelOthersCache;
@property (nonatomic) IESLiveRevenueInteractEntranceCache panelFollowDataCache;
@property (nonatomic) IESLiveRevenueInteractEntranceCache panelRecommendDataCache;
@property (nonatomic) IESLiveCountTimer othersTimer;
@property (nonatomic) IESLiveCountTimer followTimer;
@property (nonatomic) IESLiveCountTimer recommendTimer;
@property (nonatomic) NSMutableDictionary hitCacheDic;
@property (nonatomic) NSDictionary cacheDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHitCacheDic:;
- (void)setOthersTimer:;
- (void)setFollowTimer:;
- (void)addHitCacheData:dataType:;
- (id)cacheDic;
- (id)cacheStrategyConfig;
- (BOOL)cacheStrategySwitch;
- (void)endRevenueInteractWithScene:;
- (id)followTimer;
- (id)getCacheDataWithType:;
- (id)hitCacheDic;
- (id)improveDataQualityConfig;
- (id)initWithDIContext:roomModel:;
- (id)othersTimer;
- (id)panelAllDataCache;
- (id)panelFollowDataCache;
- (id)panelOthersCache;
- (id)panelRecommendDataCache;
- (void)performScheduledUpdateRepeatedly:repeatTime:dataType:delayTime:sourceType:;
- (id)recommendTimer;
- (id)repeatClickPredictionConfig;
- (long long)repeatClickPredictionCount;
- (void)requestBattleRivalsWithLastTabName:dataType:sourceType:completion:;
- (id)roomModel;
- (void)saveCacheData:loadType:sourceType:;
- (id)scheduledUpdatesConfig;
- (void)setPanelAllDataCache:;
- (void)setPanelFollowDataCache:;
- (void)setPanelOthersCache:;
- (void)setPanelRecommendDataCache:;
- (void)setRecommendTimer:;
- (void)setRepeatClickPredictionCount:;
- (void)setRoomModel:;
- (void)triggerCacheStrategyAtTime:;
- (void)updateCacheData:dataType:sourceType:;
- (void).cxx_destruct;
- (void)cleanTimer;
- (void)clean;
@end
