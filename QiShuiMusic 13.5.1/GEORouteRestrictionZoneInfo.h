@interface GEORouteRestrictionZoneInfo : NSObject
@property (nonatomic) NSArray zoneIDs;
@property (nonatomic) NSInteger restrictionZoneImpact;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)zoneIDs;
- (id)initWithGeoWaypointRoute:;
- (id)initWithGeoRoute:;
- (int)restrictionZoneImpact;
+ (BOOL)supportsSecureCoding;
@end
