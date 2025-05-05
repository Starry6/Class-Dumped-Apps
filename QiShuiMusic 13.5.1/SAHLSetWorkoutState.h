@interface SAHLSetWorkoutState : SADomainCommand
@property (nonatomic) SAHLWorkoutState targetWorkoutState;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)targetWorkoutState;
- (void)setTargetWorkoutState:;
+ (id)setWorkoutState;
+ (id)setWorkoutStateWithDictionary:context:;
@end
