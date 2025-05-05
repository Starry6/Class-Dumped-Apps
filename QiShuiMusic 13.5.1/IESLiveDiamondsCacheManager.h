@interface IESLiveDiamondsCacheManager : NSObject
@property (nonatomic) NSDictionary experimentDictionary;
@property (nonatomic) BOOL isCacheShown;
- (void)cacheDiamond:userId:;
- (id)diamondCacheForUserId:;
- (BOOL)enableCacheStrategy;
- (id)experimentDictionary;
- (BOOL)isCacheShown;
- (void)removeCacheProductsIfNeedWithUserId:;
- (void)requestCacheDiamondsIfNeedWithUserId:;
- (void)setExperimentDictionary:;
- (void)setIsCacheShown:;
- (BOOL)shouldUseNewCache;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
