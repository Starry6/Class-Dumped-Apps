@interface AWENearbyTransformerCacheManager : NSObject
@property (nonatomic) NSNumber cacheEffectivePeriod;
@property (nonatomic) NSArray strictCacheCardTypesArr;
- (id)__buildCacheWithSettingsResponse:pageType:;
- (BOOL)__checkStrategySatisfied:settingsResponse:;
- (void)__storeSettingsCache:strategy:rowTye:pageType:callback:;
- (id)cacheKeyWithRowType:strategy:;
- (id)strictCacheCardTypesArr;
- (void)storeTransformerSettingsResponse:rowType:pageType:callback:;
- (void)storeTransformerSettingsResponse:rowType:pageType:strategy:callback:;
- (id)cacheEffectivePeriod;
- (void)getValidNearbySettingsCacheWithRowType:pageType:cacheConfig:complete:;
- (void)checkCacheValid:expiredTime:resultBlk:;
- (id)__cacheNameSpaceWithRowType:;
- (void)getValidNearbySettingsCacheWithRowType:pageType:complete:;
- (void)trackCacheEventWithResult:reason:cacheStrategy:rowType:;
- (void)setStrictCacheCardTypesArr:;
- (void)setCacheEffectivePeriod:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
