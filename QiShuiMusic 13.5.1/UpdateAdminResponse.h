@interface UpdateAdminResponse : IESLivePBBaseMessage
@property (nonatomic) UpdateAdminData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) UpdateAdminExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
