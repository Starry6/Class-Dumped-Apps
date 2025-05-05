@interface CheckUserRightResult : IESLivePBBaseMessage
@property (nonatomic) CheckUserRightResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) CheckUserRightResult_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
