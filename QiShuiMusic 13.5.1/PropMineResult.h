@interface PropMineResult : IESLivePBBaseMessage
@property (nonatomic) PropMineResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
