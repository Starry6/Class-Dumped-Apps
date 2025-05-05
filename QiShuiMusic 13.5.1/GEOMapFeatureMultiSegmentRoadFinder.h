@interface GEOMapFeatureMultiSegmentRoadFinder : GEOMapFeatureIntersectedRoadFinder
- (id)findConnectedSegmentsForRoads:directionality:handler:completionHandler:;
- (id)findConnectedSegmentsForRoad:directionality:handler:completionHandler:;
- (id)_roadForRoadSegments:;
- (void)_recursivelyFindRoadSegmentsWithMuid:segments:directionality:completionHandler:;
@end
