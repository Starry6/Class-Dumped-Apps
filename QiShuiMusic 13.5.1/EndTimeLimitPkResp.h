@interface EndTimeLimitPkResp : IESLivePBBaseMessage
@property (nonatomic) EndTimeLimitPkResp_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
