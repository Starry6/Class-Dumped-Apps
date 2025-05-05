@interface MRDeviceInfoRequest : NSObject
+ (id)cachedDeviceInfoForOrigin:;
+ (id)localDeviceInfo;
+ (id)deviceInfoForOrigin:;
+ (void)deviceInfoForUID:queue:completion:;
+ (void)deviceInfoForOrigin:queue:completion:;
@end
