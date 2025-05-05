@interface SAHLWorkoutGoal : AceObject
@property (nonatomic) double goalValue;
@property (nonatomic) NSString workoutGoalUnitType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (double)goalValue;
- (id)encodedClassName;
- (void)setGoalValue:;
- (id)workoutGoalUnitType;
- (void)setWorkoutGoalUnitType:;
+ (id)workoutGoal;
+ (id)workoutGoalWithDictionary:context:;
@end
