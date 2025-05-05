@interface HTSLiveInteractionUserInfo : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) HTSLiveUser userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) HTSLiveAdminUser adminUserInfo;
@property (nonatomic) BOOL hasAdminUserInfo;
+ (id)descriptor;
@end
