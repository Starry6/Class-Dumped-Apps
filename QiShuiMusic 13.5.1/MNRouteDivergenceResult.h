@interface MNRouteDivergenceResult : NSObject
@property (nonatomic) NSUUID routeID;
@property (nonatomic) Q resultType;
@property (nonatomic) {PolylineCoordinate=If} routeCoordinate;
@property (nonatomic) {?=ddd} locationCoordinate;
- (id)routeID;
- (id)init;
- (void)setResultType:;
- (unsigned long long)resultType;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)routeCoordinate;
- (void)setRouteID:;
- (void)setRouteCoordinate:;
- (id)locationCoordinate;
- (void)setLocationCoordinate:;
@end
