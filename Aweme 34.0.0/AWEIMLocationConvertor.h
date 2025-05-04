@interface AWEIMLocationConvertor : NSObject
+ (BOOL)outOfChina:bdLon:;
+ (double)transformLat:bdLon:;
+ (double)transformLon:bdLon:;
+ (id)gcj02Encrypt:bdLon:;
+ (id)gcj02Decrypt:gjLon:;
+ (id)bd09Encrypt:bdLon:;
+ (id)bd09Decrypt:bdLon:;
+ (id)bd09ToGcj02:;
+ (id)wgs84ToGcj02:;
+ (id)gcj02ToWgs84:;
+ (id)wgs84ToBd09:;
+ (id)gcj02ToBd09:;
+ (id)bd09ToWgs84:;
@end
