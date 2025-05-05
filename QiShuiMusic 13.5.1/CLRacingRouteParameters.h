@interface CLRacingRouteParameters : NSObject
@property (nonatomic) NSArray routeMatrixIndexVec;
@property (nonatomic) CLRacingRouteVariables racingRouteVariables;
@property (nonatomic) CLRacingRouteState startPointOnCurrentRoute;
@property (nonatomic) CLRacingRouteState startPointOnReferenceRoute;
@property (nonatomic) CLRacingRouteState lastOnRouteDataPoint;
@property (nonatomic) CLRacingRouteState lastProjectedDataPoint;
@property (nonatomic) CLRouteBoundingBox routeBoundingBox;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)initWithRouteMatrixIndexVec:racingRouteVariables:startPointOnCurrentRoute:startPointOnReferenceRoute:lastOnRouteDataPoint:lastProjectedDataPoint:routeBoundingBox:;
- (id)routeMatrixIndexVec;
- (id)racingRouteVariables;
- (id)startPointOnCurrentRoute;
- (id)startPointOnReferenceRoute;
- (id)lastOnRouteDataPoint;
- (id)lastProjectedDataPoint;
- (id)routeBoundingBox;
+ (BOOL)supportsSecureCoding;
@end
