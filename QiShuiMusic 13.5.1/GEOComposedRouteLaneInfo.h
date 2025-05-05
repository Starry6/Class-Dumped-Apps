@interface GEOComposedRouteLaneInfo : NSObject
@property (nonatomic) BOOL hasDirections;
@property (nonatomic) NSArray directions;
@property (nonatomic) BOOL isLaneForManeuver;
@property (nonatomic) BOOL isHOVLane;
@property (nonatomic) BOOL isPreferredLaneForManeuver;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)directions;
- (id)initWithLaneInfo:;
- (BOOL)hasDirections;
- (BOOL)isLaneForManeuver;
- (BOOL)isPreferredLaneForManeuver;
- (BOOL)isHOVLane;
+ (BOOL)supportsSecureCoding;
@end
