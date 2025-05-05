@interface QuerySelfGroupMemberInfosResp_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray membersArray;
@property (nonatomic) Q membersArray_Count;
@property (nonatomic) NSMutableArray offStageMembersArray;
@property (nonatomic) Q offStageMembersArray_Count;
+ (id)descriptor;
@end
