@interface VKLabelNavTileData : NSObject
@property (nonatomic) r^v tile;
@property (nonatomic) BOOL oppositeCarriagewayJunctionsValid;
@property (nonatomic) NSMutableArray oppositeCarriagewayJunctions;
- (id)oppositeCarriagewayJunctions;
- (id)tile;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTile:;
- (id)junctionForGeoJunction:;
- (id)junctionAtCoordinate:;
- (void)addJunction:;
- (void)_findTileEdgeJunctions;
- (id)findTileEdgeJunctionAtCoordinate:;
- (void)initializeJunctionInfos;
- (void)appendNavJunctionsInWorldRect:junctions:;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:distanceThreshold:;
- (BOOL)oppositeCarriagewayJunctionsValid;
- (void)setOppositeCarriagewayJunctionsValid:;
@end
