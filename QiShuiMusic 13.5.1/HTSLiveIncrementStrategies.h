@interface HTSLiveIncrementStrategies : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray incrementStrategiesArray;
@property (nonatomic) Q incrementStrategiesArray_Count;
@property (nonatomic) NSMutableArray deleteStrategiesArray;
@property (nonatomic) Q deleteStrategiesArray_Count;
+ (id)descriptor;
@end
