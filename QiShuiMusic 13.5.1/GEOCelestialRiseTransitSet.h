@interface GEOCelestialRiseTransitSet : NSObject
@property (nonatomic) double julianDay;
@property (nonatomic) {CAARiseTransitSetDetails=BdBBdBd} riseTransitSet;
@property (nonatomic) BOOL isTransitAboveHorizon;
@property (nonatomic) NSDate rise;
@property (nonatomic) NSDate transit;
@property (nonatomic) NSDate set;
- (id)rise;
- (id)set;
- (id)transit;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)initWithJulianDay:riseTransitSet:;
- (id)_dateFromOffset:;
- (BOOL)isTransitAboveHorizon;
- (int)_numberOfEvents;
- (double)_oldestEventInJulianDay;
- (double)julianDay;
- (id)riseTransitSet;
@end
