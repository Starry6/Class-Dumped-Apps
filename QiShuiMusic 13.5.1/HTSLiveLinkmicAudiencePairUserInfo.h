@interface HTSLiveLinkmicAudiencePairUserInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
+ (id)descriptor;
@end
