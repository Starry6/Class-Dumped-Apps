@interface CMWorkoutOverview : NSObject
@property (nonatomic) NSUUID overviewId;
@property (nonatomic) NSArray workouts;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithOverviewId:workouts:;
- (id)overviewId;
- (id)workouts;
+ (BOOL)supportsSecureCoding;
@end
