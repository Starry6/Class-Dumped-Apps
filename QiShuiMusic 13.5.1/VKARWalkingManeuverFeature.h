@interface VKARWalkingManeuverFeature : VKARWalkingFeature
@property (nonatomic) {?=ddd} position;
@property (nonatomic) {Coordinate3D<geo::Degrees coordinate;
@property (nonatomic) {PolylineCoordinate=If} routeCoordinate;
@property (nonatomic) NSString displayText;
@property (nonatomic) double maneuverHeading;
- (id)position;
- (id)displayText;
- (void).cxx_destruct;
- (id)coordinate;
- (id)description;
- (void)setDisplayText:;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)routeCoordinate;
- (id)initWithDisplayLocation:routeCoordinate:maneuverHeading:displayText:;
- (id)initWithDisplayLocation:routeCoordinate:maneuverHeading:displayText:maneuverPriority:;
- (double)maneuverHeading;
@end
