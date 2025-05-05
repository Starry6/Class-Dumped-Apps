@interface PropBindingAlarmResult : IESLivePBBaseMessage
@property (nonatomic) PropBindingAlarmResult_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
