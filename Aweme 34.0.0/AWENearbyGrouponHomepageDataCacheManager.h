@interface AWENearbyGrouponHomepageDataCacheManager : NSObject
@property (nonatomic) AWENearbyGrouponCacheLoadV2Config cacheLoadConfig;
@property (nonatomic) AWENearbyGrouponHomepageCacheSettingsModel settingsModel;
@property (nonatomic) AWENearbyGrouponHomepageCacheDataLoadResult cacheDataLoadResult;
- (void)updateHomepageCacheDataWithListResponse:transformerList:;
- (void)preloadCacheToMemory;
- (long long)getLynxContainerType;
- (BOOL)hasSaaSFeedInListResponse:;
- (void)setupCommonConfig;
- (void)loadGrouponHomepageDataFromDisk;
- (BOOL)canCacheDataWithTransformerList:;
- (id)generateCacheToken;
- (void)setCacheLoadConfig:;
- (void)preprocessCacheData:;
- (void)trackCacheUseResult:message:;
- (id)cacheDataLoadResult;
- (void)checkGrouponCacheEnableWithCache:;
- (void)setCacheDataLoadResult:;
- (void)checkGrouponCacheValidWithCache:resultBlock:;
- (id)cacheLoadConfig;
- (id)filterDataWithAwemeList:;
- (void)loadHomepageCacheWithConfig:completion:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setSettingsModel:;
- (id)settingsModel;
+ (BOOL)isEnableHomepageCacheReface;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
