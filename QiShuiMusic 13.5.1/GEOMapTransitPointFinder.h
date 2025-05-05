@interface GEOMapTransitPointFinder : GEOMapRequest
@property (nonatomic) GEOMapAccess map;
- (void)cancel;
- (void).cxx_destruct;
- (id)map;
- (id)initWithMap:center:radius:;
- (id)initWithMap:approxLocation:pointID:;
- (id)initWithMap:approxLocation:parentID:;
- (void)findTransitPointsOfType:nodeHandler:accessPointHandler:;
- (void)_validatePoint:rect:localSearch:validPointHandler:;
@end
