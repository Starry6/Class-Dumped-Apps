@interface MNDepartureUpdater : NSObject
@property (nonatomic) GEOComposedRoute route;
@property (nonatomic) GEOComposedRouteLeg arrivalLeg;
@property (nonatomic) Q arrivalWaypointLegIndex;
- (id)route;
- (void).cxx_destruct;
- (id)initWithRoute:arrivalLegIndex:;
- (unsigned long long)arrivalWaypointLegIndex;
- (BOOL)allowDepartureForLocation:;
- (void)_initConditions;
- (id)_defaultDepartureConditions;
- (id)_arrivalRegionsDepartureConditions;
- (id)arrivalLeg;
@end
