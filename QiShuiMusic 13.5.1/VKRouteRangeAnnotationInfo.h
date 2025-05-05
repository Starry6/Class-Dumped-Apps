@interface VKRouteRangeAnnotationInfo : NSObject
@property (nonatomic) VKRouteEtaDescription etaDescription;
@property (nonatomic) {PolylineCoordinate=If} start;
@property (nonatomic) {PolylineCoordinate=If} end;
- (id)end;
- (id)start;
- (long long)compare:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)initWithEtaDescription:start:end:;
- (id)etaDescription;
@end
