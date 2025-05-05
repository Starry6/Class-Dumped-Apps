@interface GEOEquatorialCelestialBodyData : NSObject
@property (nonatomic) double rightAscension;
@property (nonatomic) double declination;
- (id)initWithDate:body:;
- (id)initWithDate:body:useHighPrecision:;
- (id)initWithJulianDay:body:useHighPrecision:;
- (id)initWithJulianDay:body:;
- (double)rightAscension;
- (double)declination;
@end
