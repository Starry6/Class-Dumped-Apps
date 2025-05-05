@interface MNRouteProximitySensor : NSObject
@property (nonatomic) GEOLocation location;
@property (nonatomic) double proximityThreshold;
@property (nonatomic) GEOComposedRoute route;
@property (nonatomic) GEOLocation closestPointOnRoute;
@property (nonatomic) GEOComposedRouteStep closestStepOnRoute;
@property (nonatomic) double courseOnRoute;
@property (nonatomic) double distanceFromOrigin;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double distanceFromDestination;
@property (nonatomic) Q proximity;
- (id)init;
- (id)route;
- (unsigned long long)proximity;
- (id)location;
- (void).cxx_destruct;
- (id)initWithRoute:;
- (double)distanceFromDestination;
- (double)distanceFromRoute;
- (double)distanceFromOrigin;
- (void)updateForLocation:;
- (id)closestPointOnRoute;
- (id)closestStepOnRoute;
- (double)courseOnRoute;
- (double)proximityThreshold;
- (void)setProximityThreshold:;
- (void)_updateProximity;
- (void)_updateRouteMatch;
@end
