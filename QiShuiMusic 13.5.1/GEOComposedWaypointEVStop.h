@interface GEOComposedWaypointEVStop : GEOComposedWaypoint
- (id)artwork;
- (unsigned long long)muid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)coordinate;
- (id)name;
- (id)chargingInfo;
- (BOOL)isServerProvidedWaypoint;
- (id)initWithGeoWaypointInfo:mapItem:;
- (id)initWithGeoWaypointInfo:;
+ (BOOL)supportsSecureCoding;
@end
