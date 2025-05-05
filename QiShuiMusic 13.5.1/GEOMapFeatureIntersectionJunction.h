@interface GEOMapFeatureIntersectionJunction : GEOMapFeatureJunction
- (id)description;
- (id)copyWithZone:;
- (unsigned long long)junctionIndex;
- (id)connectivityJunction;
- (id)initWithConnectivityJunction:tile:;
@end
