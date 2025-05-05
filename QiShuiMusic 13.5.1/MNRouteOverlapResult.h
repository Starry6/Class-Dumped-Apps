@interface MNRouteOverlapResult : NSObject
@property (nonatomic) NSUUID routeID;
@property (nonatomic) {GEOPolylineCoordinateRange={PolylineCoordinate=If}{PolylineCoordinate=If}} routeRange;
@property (nonatomic) GEOPolylineCoordinateRangeArray overlapRanges;
@property (nonatomic) GEOPolylineCoordinateRangeArray uniqueRanges;
- (id)routeID;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (void)setRouteID:;
- (id)uniqueRanges;
- (id)routeRange;
- (void)setRouteRange:;
- (id)overlapRanges;
- (void)setOverlapRanges:;
- (void)setUniqueRanges:;
@end
