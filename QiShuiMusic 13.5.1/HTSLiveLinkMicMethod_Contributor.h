@interface HTSLiveLinkMicMethod_Contributor : IESLivePBBaseMessage
@property (nonatomic) q score;
@property (nonatomic) q rank;
@property (nonatomic) NSString openId;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
+ (id)descriptor;
@end
