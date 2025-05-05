@interface GEOMapFeatureJunction : NSObject
@property (nonatomic) GEOVectorTile tile;
@property (nonatomic) {?=ff} tilePoint;
@property (nonatomic) Q junctionIndex;
@property (nonatomic) ^{GeoCodecsConnectivityJunction=II^{GeoCodecsPointFeature}} connectivityJunction;
@property (nonatomic) BOOL isOnTileBorder;
@property (nonatomic) {?=dd} coordinate;
- (id)tile;
- (void).cxx_destruct;
- (id)coordinate;
- (id)copyWithZone:;
- (BOOL)isOnTileBorder;
- (id)tilePoint;
- (unsigned long long)junctionIndex;
- (id)connectivityJunction;
+ (id)junctionForRoadFeature:startJunction:;
+ (id)connectivityJunctionForRoadFeature:startJunction:outError:;
+ (BOOL)isPointOnTileBorder:;
@end
