@interface AWELiveLifeLocationManager : NSObject
+ (void)requestLocationPermission;
+ (void)permissionChange:;
+ (void)openApplicationSettings;
+ (void)setup;
+ (void)setupIfNeeded;
@end
