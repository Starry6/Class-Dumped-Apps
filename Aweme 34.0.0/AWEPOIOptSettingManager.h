@interface AWEPOIOptSettingManager : NSObject
+ (id)tradeOptSettings;
+ (id)tradeTripSettings;
+ (id)tripPrecacheConfig;
+ (id)geckoResourcePreloadStratrgy;
+ (int)renderCacheTripValidTime;
+ (id)renderCacheTripCheckRouterKeys;
+ (id)renderCacheTripAllowCacheComponentsArray;
+ (BOOL)renderCacheTripDoor;
+ (BOOL)renderCacheTripPreRequestDoor;
+ (id)renderCacheBlackFilterDoorRule;
@end
