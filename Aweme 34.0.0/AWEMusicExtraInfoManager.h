@interface AWEMusicExtraInfoManager : NSObject
@property (nonatomic) NSMutableDictionary riskInfoCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)musicServiceReadyToPlay:;
- (unsigned long long)preloadCount;
- (id)getPlayerModelsFromMusicService:byNextCount:;
- (void)updateRiskCache:forKey:inQueue:;
- (void)getMusicExtraInfoWithIncludes:musicPlayerModel:queueId:completion:;
- (id)riskInfoCache;
- (BOOL)riskInfoCacheExpired:;
- (void)requestExtraInfoWithIncludes:playerModel:completion:;
- (id)combineExtraInfoWithIncludes:fromResponse:;
- (void)setRiskInfoCache:;
- (id)init;
- (void).cxx_destruct;
@end
