@interface GEOQuickETATransitDeparturesInfo : NSObject
@property (nonatomic) NSString direction;
@property (nonatomic) NSString headsign;
@property (nonatomic) BOOL departuresHaveFrequency;
@property (nonatomic) double departureFrequency;
@property (nonatomic) NSDate departureFrequencyValidUntil;
- (id)direction;
- (void).cxx_destruct;
- (id)description;
- (double)departureFrequency;
- (id)headsign;
- (id)initWithComposedRoute:;
- (id)_chooseMostImportantTransitLegInRoute:;
- (BOOL)departuresHaveFrequency;
- (id)departureFrequencyValidUntil;
@end
