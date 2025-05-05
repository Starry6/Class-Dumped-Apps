@interface TRIPushNotification : TRIPBMessage
@property (nonatomic) NSInteger notificationOneOfCase;
@property (nonatomic) TRIRolloutDeploymentPushNotification rolloutNotification;
@property (nonatomic) TRIExperimentRollbackPushNotification experimentNotification;
+ (id)descriptor;
@end
