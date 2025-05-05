@interface QueryGroupMemberInfosReq : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSInteger scene;
+ (id)descriptor;
@end
