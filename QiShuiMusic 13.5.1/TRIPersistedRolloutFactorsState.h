@interface TRIPersistedRolloutFactorsState : TRIPBMessage
@property (nonatomic) NSString rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
+ (id)descriptor;
@end
