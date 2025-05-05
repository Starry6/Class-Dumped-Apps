@interface IESGurdExpiredCacheManager : NSObject
@property (nonatomic) NSMutableDictionary lastCleanDateDictionary;
@property (nonatomic) NSDictionary targetGroupDictionary;
@property (nonatomic) NSDictionary targetChannelDictionary;
@property (nonatomic) BOOL clearExpiredCacheEnabled;
- (void)clearCache:cleanType:completion:;
- (void)clearCacheForAccessKey:channel:activeMeta:config:completion:;
- (void)clearCacheWhenLowStorage;
- (void)clearCacheWithAccesskey:expireAge:cleanType:completion:;
- (void)clearCacheWithConfig:completion:;
- (BOOL)clearExpiredCacheEnabled;
- (long long)getClearCacheSize:;
- (long long)getClearCacheSizeWithAccesskey:expireAge:;
- (void)innerClearCacheWithConfig:channels:timestamp:completion:;
- (BOOL)isExpiredChannelWithActiveMeta:activeMeta:config:timestamp:;
- (id)lastCleanDateDictionary;
- (void)setClearExpiredCacheEnabled:;
- (void)setLastCleanDateDictionary:;
- (void)setTargetChannelDictionary:;
- (void)setTargetGroupDictionary:;
- (id)targetChannelDictionary;
- (id)targetGroupDictionary;
- (void)updateTargetChannels:;
- (void)updateTargetGroupDictionary:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
