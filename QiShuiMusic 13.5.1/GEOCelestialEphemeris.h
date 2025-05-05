@interface GEOCelestialEphemeris : NSObject
@property (nonatomic) NSDate rise;
@property (nonatomic) NSDate transit;
@property (nonatomic) BOOL isTransitAboveHorizon;
@property (nonatomic) NSDate set;
@property (nonatomic) double phaseAngle;
@property (nonatomic) double illuminatedFraction;
@property (nonatomic) double elongation;
@property (nonatomic) double parallacticAngle;
@property (nonatomic) GEOSolarEclipticCelestialBodyData eclipticCoord;
@property (nonatomic) GEOEquatorialCelestialBodyData equatorialCoord;
@property (nonatomic) GEOHorizontalCelestialBodyData horizontalCoord;
- (id)rise;
- (id)set;
- (id)transit;
- (id)initWithLocation:date:body:useHighPrecision:;
- (id)initWithLocation:date:body:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isTransitAboveHorizon;
- (id)eclipticCoord;
- (id)equatorialCoord;
- (id)horizontalCoord;
- (id)initWithLocation:julianDay:body:altitude:useHighPrecision:;
- (double)elongation;
- (double)phaseAngle;
- (double)illuminatedFraction;
- (double)parallacticAngle;
@end
