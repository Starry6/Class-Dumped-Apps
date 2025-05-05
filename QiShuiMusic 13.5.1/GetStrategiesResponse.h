@interface GetStrategiesResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveStrategyInfo data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) HTSLiveStrategyRespExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
