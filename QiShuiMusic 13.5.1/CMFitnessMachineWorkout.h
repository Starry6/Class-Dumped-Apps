@interface CMFitnessMachineWorkout : CMWorkout
@property (nonatomic) NSString manufacturerName;
@property (nonatomic) NSString model;
- (id)model;
- (id)manufacturerName;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSessionId:workoutType:manufacturerName:model:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
+ (id)fitnessMachineWorkoutInstance:;
@end
