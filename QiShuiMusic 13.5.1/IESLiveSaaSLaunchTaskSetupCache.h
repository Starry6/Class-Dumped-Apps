@interface IESLiveSaaSLaunchTaskSetupCache : IESLiveSaaSDefaultLaunchTask
@property (nonatomic) <IESLiveCacheOperation> cacheOperator;
@property (nonatomic) <IESLiveKTVCacheService> ktvService;
- (id)cacheOperator;
- (void)excute;
- (id)ktvService;
- (void)setCacheOperator:;
- (void)setKtvService:;
- (void).cxx_destruct;
@end
