@interface HTSLiveIntercomChangeSyncData : IESLivePBBaseMessage
@property (nonatomic) q intercomStatus;
@property (nonatomic) q closeReason;
+ (id)descriptor;
@end
