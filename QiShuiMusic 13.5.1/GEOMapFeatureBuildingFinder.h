@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder
- (id)findBuildingsNear:radius:tileSetStyle:handler:completionHandler:;
- (id)findBuildingsNear:radius:handler:completionHandler:;
@end
