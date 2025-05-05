@interface HTSLiveRefreshParams : IESLivePBBaseMessage
@property (nonatomic) NSInteger refreshMechanism;
@property (nonatomic) q pollingInterval;
+ (id)descriptor;
@end
