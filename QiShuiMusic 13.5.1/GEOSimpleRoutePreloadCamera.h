@interface GEOSimpleRoutePreloadCamera : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)implicateTilesForCoordinate:route:nearestRoutePointIdx:stepNearManeuever:into:stepSize:maneuverSize:tileSetStyles:;
- (id)implicateAssetMetadataTilesForCoordinate:size:;
@end
