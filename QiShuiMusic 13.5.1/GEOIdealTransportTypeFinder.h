@interface GEOIdealTransportTypeFinder : NSObject
+ (long long)idealTransportType;
+ (long long)idealTransportTypeForOrigin:destination:mapType:;
+ (id)_transportTypePreferenceAsString:;
+ (long long)idealTransportTypeForCoordinates:count:mapType:;
+ (long long)idealTransportTypeForMapType:;
@end
