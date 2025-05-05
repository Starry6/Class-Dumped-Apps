@interface AMapRoute : AMapSearchObject
@property (nonatomic) AMapGeoPoint origin;
@property (nonatomic) AMapGeoPoint destination;
@property (nonatomic) double taxiCost;
@property (nonatomic) NSArray paths;
@property (nonatomic) NSArray transits;
- (BOOL)ajo_validateValue:forKey:error:;
- (void)setTaxiCost:;
- (void)setTransits:;
- (double)taxiCost;
- (id)transits;
- (void)setPaths:;
- (void)setDestination:;
- (id)paths;
- (void)setOrigin:;
- (id)destination;
- (id)origin;
- (void).cxx_destruct;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
