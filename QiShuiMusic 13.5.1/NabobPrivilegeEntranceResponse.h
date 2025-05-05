@interface NabobPrivilegeEntranceResponse : IESLivePBBaseMessage
@property (nonatomic) NabobPrivilegeEntranceResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
