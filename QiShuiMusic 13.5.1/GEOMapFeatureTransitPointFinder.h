@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder
- (id)findTransitAccessPointsForStation:handler:completionHandler:;
- (id)_tileFinder;
- (id)findTransitPointsOfType:near:radius:handler:completionHandler:;
- (id)findTransitPointWithID:near:handler:completionHandler:;
- (id)findParentOfTransitPoint:handler:completionHandler:;
- (id)findTransitPointsWithParent:handler:completionHandler:;
- (id)findGeometryForTransitPoint:completionHandler:;
- (id)_geometryTileFinder;
- (id)_transitPointForFeature:;
@end
