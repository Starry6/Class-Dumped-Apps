@interface VKAlternateRouteInfo : VKRouteInfo
@property (nonatomic) {PolylineCoordinate=If} divergenceCoordinate;
@property (nonatomic) {PolylineCoordinate=If} convergenceCoordinate;
@property (nonatomic) C etaComparisionToMain;
- (id).cxx_construct;
- (void)setEtaComparisionToMain:;
- (id)initWithComposedRoute:etaText:divergenceRouteCoordinate:convergenceRouteCoordinate:;
- (id)initWithComposedRoute:etaDescription:divergenceRouteCoordinate:convergenceRouteCoordinate:;
- (id)divergenceCoordinate;
- (id)convergenceCoordinate;
- (unsigned char)etaComparisionToMain;
@end
