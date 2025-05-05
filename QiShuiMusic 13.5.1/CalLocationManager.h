@interface CalLocationManager : NSObject
+ (void)currentLocationWithCompletionBlock:;
+ (BOOL)isCurrentProcessEntitledToUseLocationServices;
+ (id)placemarkForLocation:withCompletionBlock:;
+ (id)placemarkForAddress:withCompletionBlock:;
+ (id)strictGeocodeString:withCompletionBlock:;
+ (void)_loadMapKit;
@end
