@interface HTSLiveRoomStrategyInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray roomStrategiesArray;
@property (nonatomic) Q roomStrategiesArray_Count;
+ (id)descriptor;
@end
