@interface GetTimeLimitPkStatusResp : IESLivePBBaseMessage
@property (nonatomic) GetTimeLimitPkStatusResp_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
