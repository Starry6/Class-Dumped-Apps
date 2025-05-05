@interface GEOSolarEventCalculator : NSObject
- (void)dealloc;
- (id)initWithLocation:time:;
- (id)initWithLocation:time:altitudeInDegrees:accuracy:after:;
- (id)initWithLocation:time:altitudeInDegrees:accuracy:;
- (id)description;
- (double)nextEventOfType:;
+ (double)nextEventOfType:after:forLocation:;
+ (double)nextEventOfType:after:forLocation:altitudeInDegrees:accuracy:;
+ (double)prevEventOfType:before:forLocation:altitudeInDegrees:accuracy:;
@end
