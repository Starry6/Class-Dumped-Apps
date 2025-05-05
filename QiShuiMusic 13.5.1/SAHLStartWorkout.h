@interface SAHLStartWorkout : SADomainCommand
@property (nonatomic) BOOL isOpenGoal;
@property (nonatomic) BOOL skipActivitySetup;
@property (nonatomic) SAHLWorkoutGoal workoutGoal;
@property (nonatomic) SAHLWorkoutType workoutType;
@property (nonatomic) NSString workoutUserMode;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setWorkoutType:;
- (id)workoutType;
- (id)workoutGoal;
- (BOOL)isOpenGoal;
- (void)setIsOpenGoal:;
- (BOOL)skipActivitySetup;
- (void)setSkipActivitySetup:;
- (void)setWorkoutGoal:;
- (id)workoutUserMode;
- (void)setWorkoutUserMode:;
+ (id)startWorkout;
+ (id)startWorkoutWithDictionary:context:;
@end
