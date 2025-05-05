@interface TTRegionManager : NSObject
+ (id)extractStoreRegionFromCookieHeaders:;
+ (id)getdomainRegionConfig;
+ (void)updateStoreRegionConfigFromResponse:responseBody:url:;
@end
