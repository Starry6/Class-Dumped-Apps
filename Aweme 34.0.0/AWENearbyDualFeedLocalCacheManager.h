@interface AWENearbyDualFeedLocalCacheManager : NSObject
@property (nonatomic) q timeoutInterval;
@property (nonatomic) q minUseCacheAwemeNum;
@property (nonatomic) AWENearbySettingsLocalCache cacheSettingsRspInMem;
@property (nonatomic) AWENearbyC2ListDataLocalCache cacheFeedRspInMem;
@property (nonatomic) AWENearbyGrouponListDataLocalCache cacheGrouponFeedRspInMem;
- (void)fetchSettings;
- (id)getFeedPreCacheKey;
- (id)getCacheToken;
- (void)checkCacheVaild:resultBlk:;
- (void)setMinUseCacheAwemeNum:;
- (void)configCacheFlagAwemeList:;
- (long long)minUseCacheAwemeNum;
- (void)storeGrouponFeedCacheWithFeedRsp:resultBlk:;
- (id)cacheGrouponFeedRspInMem;
- (id)cacheFeedRspInMem;
- (void)setCacheFeedRspInMem:;
- (id)cacheSettingsRspInMem;
- (void)setCacheSettingsRspInMem:;
- (void)checkGrouponCacheValid:resultBlk:;
- (void)setCacheGrouponFeedRspInMem:;
- (void)storeNearbyFeedCacheWithFeedRsp:resultBlk:;
- (void)getValidNearbyFeedCacheWithBlk:clean:;
- (void)getValidNearbySettingsCacheWithBlk:clean:;
- (void)getValidGrouponFeedCacheWithBlk:clean:;
- (void)clearGrouponFeedRspInMem;
- (long long)timeoutInterval;
- (id)init;
- (void)setTimeoutInterval:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
