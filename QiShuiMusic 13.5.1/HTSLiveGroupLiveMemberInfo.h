@interface HTSLiveGroupLiveMemberInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q score;
+ (id)descriptor;
@end
