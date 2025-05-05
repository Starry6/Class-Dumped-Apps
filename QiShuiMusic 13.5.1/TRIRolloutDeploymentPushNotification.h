@interface TRIRolloutDeploymentPushNotification : TRIPBMessage
@property (nonatomic) NSString rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) I deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) TRIPBTimestamp deploymentDate;
@property (nonatomic) BOOL hasDeploymentDate;
@property (nonatomic) TRINotificationProcessingPolicy notificationProcessingPolicy;
@property (nonatomic) BOOL hasNotificationProcessingPolicy;
+ (id)descriptor;
@end
