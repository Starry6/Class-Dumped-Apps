@interface HTSLiveStrategyInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveIncrementStrategies incrementStrategies;
@property (nonatomic) BOOL hasIncrementStrategies;
@property (nonatomic) NSMutableArray fullStrategiesArray;
@property (nonatomic) Q fullStrategiesArray_Count;
@property (nonatomic) NSInteger responseType;
- (id)dictionaryWtihStrategyInfo;
- (id)mutableCopyWithZone:;
+ (id)descriptor;
@end
