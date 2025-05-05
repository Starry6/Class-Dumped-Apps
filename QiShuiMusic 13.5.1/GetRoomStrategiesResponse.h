@interface GetRoomStrategiesResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoomStrategyInfo data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
