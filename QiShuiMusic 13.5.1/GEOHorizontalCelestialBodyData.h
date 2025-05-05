@interface GEOHorizontalCelestialBodyData : NSObject
@property (nonatomic) double altitude;
@property (nonatomic) double azimuth;
- (double)altitude;
- (double)azimuth;
- (id)initWithLocation:date:body:useHighPrecision:;
- (id)initWithLocation:date:body:;
- (id)initWithLocation:julianDay:body:useHighPrecision:;
@end
