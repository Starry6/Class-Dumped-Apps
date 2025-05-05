@interface TRIPersistedFactorsState : TRIPBMessage
@property (nonatomic) NSInteger stateOneOfCase;
@property (nonatomic) TRIPersistedRolloutFactorsState rollout;
@property (nonatomic) TRIPersistedExperimentFactorsState experiment;
+ (id)descriptor;
@end
