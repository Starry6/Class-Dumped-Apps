@interface PropConsumeResult : IESLivePBBaseMessage
@property (nonatomic) PropConsumeResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
