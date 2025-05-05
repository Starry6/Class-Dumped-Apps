@interface StartTimeLimitPkResp : IESLivePBBaseMessage
@property (nonatomic) StartTimeLimitPkResp_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
