@interface EditGroupMemberNameReq : IESLivePBBaseMessage
@property (nonatomic) q memberId;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
