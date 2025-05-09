@interface AWENearbyPreloadCachedDataModelABParams : MTLModel
@property (nonatomic) BOOL cachingPreloadData;
@property (nonatomic) q cacheValidTime;
@property (nonatomic) q cacheNeedUpDataTime;
@property (nonatomic) BOOL needCheckCacheBeforePreRequest;
@property (nonatomic) Q reqWhenL3ChangeAction;
@property (nonatomic) BOOL cacheNotMobFreshClientShow;
@property (nonatomic) BOOL isPreloadOnlyApiUnification;
@property (nonatomic) BOOL needHideDistanceTag;
@property (nonatomic) BOOL isHotRecommend;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCacheValidTime:;
- (BOOL)cacheNotMobFreshClientShow;
- (void)setCacheNotMobFreshClientShow:;
- (BOOL)cachingPreloadData;
- (void)setCachingPreloadData:;
- (long long)cacheNeedUpDataTime;
- (void)setCacheNeedUpDataTime:;
- (BOOL)needCheckCacheBeforePreRequest;
- (void)setNeedCheckCacheBeforePreRequest:;
- (unsigned long long)reqWhenL3ChangeAction;
- (void)setReqWhenL3ChangeAction:;
- (BOOL)isPreloadOnlyApiUnification;
- (void)setIsPreloadOnlyApiUnification:;
- (BOOL)needHideDistanceTag;
- (void)setNeedHideDistanceTag:;
- (BOOL)isHotRecommend;
- (void)setIsHotRecommend:;
- (long long)cacheValidTime;
+ (BOOL)automaticallyDefaultMapping;
@end
