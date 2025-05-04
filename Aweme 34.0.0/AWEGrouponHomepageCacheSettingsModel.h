@interface AWEGrouponHomepageCacheSettingsModel : NSObject
@property (nonatomic) BOOL isGrouponHomepageCacheEnable;
@property (nonatomic) q cacheValidTime;
@property (nonatomic) q minUseCacheNum;
@property (nonatomic) q cacheValidTimeInHour;
@property (nonatomic) BOOL cacheNotMobFreshClientShow;
- (void)setCacheValidTime:;
- (void)setCacheValidTimeInHour:;
- (long long)cacheValidTimeInHour;
- (BOOL)isGrouponHomepageCacheEnable;
- (void)setIsGrouponHomepageCacheEnable:;
- (long long)minUseCacheNum;
- (void)setMinUseCacheNum:;
- (BOOL)cacheNotMobFreshClientShow;
- (void)setCacheNotMobFreshClientShow:;
- (long long)cacheValidTime;
@end
