@interface BindGroupMembersResp : IESLivePBBaseMessage
@property (nonatomic) BindGroupMembersResp_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
