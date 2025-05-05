@interface GEOComposedRouteETAUPosition : NSObject
@property (nonatomic) {?=If} routeCoordinate;
@property (nonatomic) double timeSinceLastUpdate;
- (long long)compare:;
- (id)routeCoordinate;
- (id)initWithComposedRoute:andUpdateLocation:offset:;
- (double)timeSinceLastUpdate;
@end
