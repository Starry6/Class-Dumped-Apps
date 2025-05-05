@interface AdvanceAwardPrizeResult : IESLivePBBaseMessage
@property (nonatomic) AdvanceAwardPrizeResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
