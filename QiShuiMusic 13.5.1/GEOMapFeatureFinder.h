@interface GEOMapFeatureFinder : GEOMapRequest
@property (nonatomic) @? roadHandler;
@property (nonatomic) @? pointHandler;
@property (nonatomic) @? polygonHandler;
@property (nonatomic) GEOMapAccess map;
@property (nonatomic) BOOL ignoreUnnamedFeatures;
- (void)cancel;
- (void).cxx_destruct;
- (id)map;
- (id)initWithMap:center:;
- (void)_pickRoadInTile:tileRect:localPoint:;
- (void)findFeatures:pointHandler:polygonHandler:completionHandler:;
- (id)roadHandler;
- (void)setRoadHandler:;
- (id)pointHandler;
- (void)setPointHandler:;
- (id)polygonHandler;
- (void)setPolygonHandler:;
- (BOOL)ignoreUnnamedFeatures;
- (void)setIgnoreUnnamedFeatures:;
@end
