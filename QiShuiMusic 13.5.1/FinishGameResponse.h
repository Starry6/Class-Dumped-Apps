@interface FinishGameResponse : IESLivePBBaseMessage
@property (nonatomic) FinishGameResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
