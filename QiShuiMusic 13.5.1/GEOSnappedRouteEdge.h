@interface GEOSnappedRouteEdge : NSObject
@property (nonatomic) {shared_ptr<geo::MapEdgeRoad>=^{MapEdgeRoad}^{__shared_weak_count}} mapEdge;
@property (nonatomic) GEOMultiSectionFeature feature;
@property (nonatomic) ^{GeoCodecsVectorTilePoint=ff} points;
@property (nonatomic) Q pointCount;
@property (nonatomic) {PolylineCoordinate=If} routeOffsetA;
@property (nonatomic) {PolylineCoordinate=If} routeOffsetB;
@property (nonatomic) ^{PolylineCoordinate=If} routeOffsets;
@property (nonatomic) Q mapEdgeOffset;
@property (nonatomic) BOOL clippedFront;
@property (nonatomic) BOOL clippedBack;
- (id)feature;
- (void).cxx_destruct;
- (id)description;
- (id)points;
- (id).cxx_construct;
- (unsigned long long)pointCount;
- (id)initWithRoadPath:sectionRect:;
- (void)calculateRouteOffsetsBetweenA:andB:overLength:onRoute:;
- (id)routeOffsets;
- (id)routeOffsetA;
- (id)routeOffsetB;
- (id)mapEdge;
- (unsigned long long)mapEdgeOffset;
- (BOOL)clippedFront;
- (BOOL)clippedBack;
@end
