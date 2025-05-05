@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder
@property (nonatomic) BOOL joinAllRoadsByMuid;
- (void).cxx_destruct;
- (BOOL)joinAllRoadsByMuid;
- (void)setJoinAllRoadsByMuid:;
- (id)findRoadsAtPreviousIntersectionOf:desiredRoadDirectionality:handler:completionHandler:;
- (id)findRoadsAtNextIntersectionOf:desiredRoadDirectionality:handler:completionHandler:;
- (id)findRoadsAtJunction:desiredRoadDirectionality:handler:completionHandler:;
- (id)_findRoadsAtJunction:desiredRoadDirectionality:muid:featureToIgnore:handler:completionHandler:;
- (id)findUnjoinedRoadsAtJunction:desiredRoadDirectionality:muid:requireExactMuidMatch:featureToIgnore:handler:completionHandler:;
- (void)_tilesBorderingTile:atPoint:withHandler:;
@end
