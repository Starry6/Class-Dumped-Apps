@interface MNGuidanceLaneInfo : NSObject
@property (nonatomic) NSUUID uniqueID;
@property (nonatomic) BOOL isForManeuver;
@property (nonatomic) NSArray lanes;
@property (nonatomic) NSArray titles;
@property (nonatomic) NSArray instructions;
@property (nonatomic) NSDictionary variableOverrides;
@property (nonatomic) q distanceDetailLevel;
@property (nonatomic) NSInteger composedGuidanceEventIndex;
- (id)uniqueID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)titles;
- (id)instructions;
- (id)lanes;
- (id)variableOverrides;
- (long long)distanceDetailLevel;
- (int)composedGuidanceEventIndex;
- (id)initWithID:isForManeuver:lanes:titles:instructions:variableOverrides:distanceDetailLevel:composedGuidanceEventIndex:;
- (BOOL)isForManeuver;
+ (BOOL)supportsSecureCoding;
@end
