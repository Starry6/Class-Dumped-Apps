@interface MKJunction : NSObject
@property (nonatomic) NSInteger type;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (int)type;
- (BOOL)isEqual:;
- (id)initWithJunction:;
- (id)initWithType:maneuver:drivingSide:elements:count:;
- (BOOL)willSnapToSharpRight;
- (BOOL)willSnapToRightHandTurn;
- (BOOL)rightOrLeftTurnWillSnapToNinetyDegrees;
- (BOOL)_willSnapToNinetyDegreesForManeuverTypes:;
- (void)getArrowPath:arrowStrokePath:intersectionBackgroundPath:strokePath:withSize:metrics:drivingSide:visualCenter:;
- (void)getArrowPath:arrowStrokePath:pivot:withSize:metrics:visualCenter:;
- (id)roundaboutArrowWithSize:metrics:outerRadius:endAngle:pivot:;
- (void)getRoundaboutArrowPath:intersectionBackgroundPath:strokePath:withSize:metrics:drivingSide:visualCenter:;
+ (BOOL)supportsSecureCoding;
@end
