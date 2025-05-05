@interface ResurrectGroupMemberReq : IESLivePBBaseMessage
@property (nonatomic) q memberId;
@property (nonatomic) NSString roomId;
+ (id)descriptor;
@end
