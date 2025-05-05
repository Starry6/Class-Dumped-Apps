@interface GEOSolarEclipticCelestialBodyData : NSObject
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
- (double)latitude;
- (double)longitude;
- (id)initWithDate:body:;
- (id)initWithDate:body:useHighPrecision:;
- (id)initWithJulianDay:body:useHighPrecision:;
@end
