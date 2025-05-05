@interface MNRouteCoordinateWithType : NSObject
@property (nonatomic) Q significanceType;
@property (nonatomic) {PolylineCoordinate=If} routeCoordinate;
- (id)description;
- (id).cxx_construct;
- (id)routeCoordinate;
- (void)setRouteCoordinate:;
- (unsigned long long)significanceType;
- (void)setSignificanceType:;
+ (id)divergenceCoordinate:;
+ (id)convergenceCoordinate:;
@end
