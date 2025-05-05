@interface QuerySelfGroupMemberInfosResp_GroupLiveMemberInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q score;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString nickName;
@property (nonatomic) q giftIncome;
+ (id)descriptor;
@end
