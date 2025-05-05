@interface InfoResult : IESLivePBBaseMessage
@property (nonatomic) InfoResult_InfoData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
