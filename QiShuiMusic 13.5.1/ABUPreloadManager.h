@interface ABUPreloadManager : ABUSingleton
@property (nonatomic) NSMutableSet loaders;
@property (nonatomic) NSMutableDictionary waterfalls;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_loadConfigWithDelay:;
- (void)checkPreloadEndWithAd:;
- (void)configLoadDidFailedWithError:;
- (void)configLoadDidSuccess;
- (void)configLoadForServerDidFailed_V2WithError:;
- (void)configLoadForServerDidSuccess_V2;
- (BOOL)preloadAdFromAd:withType:andOptionalMediaSlotConfig:;
- (BOOL)preloadAdFromAd:withType:andOptionalMediaSlotConfig:extra:;
- (void)preloadAdsWithInfos:andInterval:andConcurrent:;
- (long long)requestTypeWithPreloadType:;
- (void)setWaterfalls:;
- (id)waterfalls;
- (id)init;
- (void).cxx_destruct;
- (id)loaders;
- (void)setLoaders:;
@end
