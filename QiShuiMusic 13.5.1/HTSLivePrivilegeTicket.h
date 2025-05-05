@interface HTSLivePrivilegeTicket : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray skuIdArray;
@property (nonatomic) Q skuIdArray_Count;
@property (nonatomic) NSMutableArray privilegeConfArray;
@property (nonatomic) Q privilegeConfArray_Count;
@property (nonatomic) BOOL privilegeHasPaid;
+ (id)descriptor;
@end
