@interface TimeLimitPkUserInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) q score;
+ (id)descriptor;
@end
