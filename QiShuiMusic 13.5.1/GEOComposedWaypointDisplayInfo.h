@interface GEOComposedWaypointDisplayInfo : NSObject
@property (nonatomic) GEOARInfo arInfo;
@property (nonatomic) GEOPBTransitArtwork artwork;
@property (nonatomic) GEOEVChargingInfo evChargingInfo;
@property (nonatomic) NSString name;
@property (nonatomic) {?=dd} position;
@property (nonatomic) GEOStyleAttributes styleAttributes;
- (id)position;
- (id)artwork;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)styleAttributes;
- (id)evChargingInfo;
- (id)arInfo;
- (id)initWithGeoWaypointInfo:waypoint:;
- (void)_initPositionWithGeoWaypointInfo:waypoint:;
+ (BOOL)supportsSecureCoding;
@end
