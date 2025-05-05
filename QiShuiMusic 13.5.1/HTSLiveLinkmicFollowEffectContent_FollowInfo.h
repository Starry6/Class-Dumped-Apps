@interface HTSLiveLinkmicFollowEffectContent_FollowInfo : IESLivePBBaseMessage
@property (nonatomic) NSString targetOpenId;
@property (nonatomic) q followStatus;
+ (id)descriptor;
@end
