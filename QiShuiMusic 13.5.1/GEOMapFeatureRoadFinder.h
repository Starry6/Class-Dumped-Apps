@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;
@property (nonatomic) BOOL joinAllRoadsByMuid;
- (void)setFlipNegativeTravelDirectionRoads:;
- (id)findRoadWithMuid:nearCoordinate:handler:completionHandler:;
- (id)findRoadsNear:radius:handler:completionHandler:;
- (void).cxx_destruct;
- (id)findRoadWithID:handler:completionHandler:;
- (BOOL)flipNegativeTravelDirectionRoads;
- (BOOL)visitDoubleTravelDirectionRoadsTwice;
- (BOOL)joinAllRoadsByMuid;
- (void)setVisitDoubleTravelDirectionRoadsTwice:;
- (void)setJoinAllRoadsByMuid:;
- (id)_multiSegmentRoadFinder;
- (id)_findUnjoinedRoadsNear:radius:handler:completionHandler:;
- (id)_findUnjoinedRoadsNear:radius:handler:;
@end
