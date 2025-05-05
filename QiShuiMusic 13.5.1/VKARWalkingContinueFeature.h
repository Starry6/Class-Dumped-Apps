@interface VKARWalkingContinueFeature : VKARWalkingFeature
@property (nonatomic) NSString displayText;
@property (nonatomic) {GEOPolylineCoordinateRange={PolylineCoordinate=If}{PolylineCoordinate=If}} range;
@property (nonatomic) GEOComposedRoute route;
- (void)setRoute:;
- (id)route;
- (id)range;
- (id)displayText;
- (void).cxx_destruct;
- (id)description;
- (void)setDisplayText:;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)initWithRoute:range:displayText:;
- (id)initWithRoute:range:displayText:continuePriority:;
@end
