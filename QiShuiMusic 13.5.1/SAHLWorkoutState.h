@interface SAHLWorkoutState : AceObject
@property (nonatomic) NSString workoutStateValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)workoutStateValue;
- (void)setWorkoutStateValue:;
+ (id)workoutState;
+ (id)workoutStateWithDictionary:context:;
@end
