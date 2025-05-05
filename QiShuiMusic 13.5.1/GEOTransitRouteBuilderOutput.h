@interface GEOTransitRouteBuilderOutput : GEORouteBuilderOutput
@property (nonatomic) BOOL isWalkingOnlyRoute;
@property (nonatomic) NSArray rideSelections;
@property (nonatomic) NSArray sectionOptions;
- (void).cxx_destruct;
- (id)sectionOptions;
- (void)setSectionOptions:;
- (id)rideSelections;
- (BOOL)isWalkingOnlyRoute;
- (void)setIsWalkingOnlyRoute:;
- (void)setRideSelections:;
@end
