@interface GEOMapFeatureAccessFinder : NSObject
@property (nonatomic) BOOL allowNetwork;
@property (nonatomic) BOOL allowStaleData;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (BOOL)allowStaleData;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)setAllowStaleData:;
- (id)queue;
- (void)setExistingRequest:;
- (id)initWithTileLoader:;
- (BOOL)allowNetwork;
- (void)setAllowNetwork:;
- (BOOL)_featureHasValidGeometry:;
- (id)_boundingCircleWithCenter:radius:inTile:;
- (BOOL)_boundingCircle:intersectsFeature:;
- (BOOL)_boundingCircle:intersectsTransitLink:;
- (BOOL)_boundingCircle:intersectsPoints:pointCount:;
@end
