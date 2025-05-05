@interface TRIExperimentRollbackPushNotification : TRIPBMessage
@property (nonatomic) NSString experimentId;
@property (nonatomic) BOOL hasExperimentId;
+ (id)descriptor;
@end
