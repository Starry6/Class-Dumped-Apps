@interface CloseTimeLimitPkResp : IESLivePBBaseMessage
@property (nonatomic) CloseTimeLimitPkResp_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
