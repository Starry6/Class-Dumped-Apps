@interface QuerySelfGroupMemberInfosReq : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSInteger scoreType;
+ (id)descriptor;
@end
