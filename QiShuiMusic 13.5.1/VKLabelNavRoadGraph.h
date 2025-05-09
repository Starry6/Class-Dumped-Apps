@interface VKLabelNavRoadGraph : NSObject
@property (nonatomic) NSMutableArray junctions;
- (id)junctionListForDepth:;
- (id)junctions;
- (void)setJunctions:;
- (id)junctionForRoad:nearJunction:crossTileEdge:;
- (BOOL)isPriorRouteCollinearWithRoad:distance:;
- (void)setTiles:;
- (void)_updateIntersectionsForDepth:;
- (id)_junctionForRoadEdge:atA:routeOffset:tile:;
- (void)evaluateDualCarriagewayForJunction:outputJunctionList:;
- (id)oppositeCarriagewayJunctions;
- (id)initWithJunctions:;
- (BOOL)prepareOppositeCarriagewayJunctions;
- (void)routeJunctionsHaveChanged;
- (unsigned long long)countReadyJunctionLists;
- (unsigned char)computeRoutePositionForPOIAtPixel:currentPosition:context:;
- (void)addRouteRoadEdge:atA:isRouteRefineJunction:tile:junctionList:;
- (BOOL)_checkIfDualCarriageWayConnectorRoad:fromJunction:toJunction:checkShields:;
- (void)startingLabelLayoutWithContext:routeUserOffset:;
- (void)_transformRouteToScreenWithContext:;
- (id)_nextIntersectionForRoad:;
- (void).cxx_destruct;
- (id)offRouteGraphJunctionsWithNavContext:maxJunctions:isOnRoute:;
- (void)_findOffRouteJunctions;
- (id)nextRoadSegmentForRoad:;
- (void)reset;
- (id)offRouteJunctionList;
- (BOOL)collideRouteWithLabel:routeCrossProduct:context:;
- (id)_findInterTileJunctionForJunction:;
- (void)debugDraw:overlayConsole:navContext:;
- (void)_updateSimplifiedRoute;
- (id).cxx_construct;
- (id)unitHeading;
- (id)overpassJunctionForJunction:;
@end
