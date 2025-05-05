@interface CMGenericWorkout : CMWorkout
@property (nonatomic) Q workoutLabel;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSessionId:workoutLabel:;
- (unsigned long long)workoutLabel;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
+ (id)genericWorkoutInstance:;
@end
