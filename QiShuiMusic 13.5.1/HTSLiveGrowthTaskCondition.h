@interface HTSLiveGrowthTaskCondition : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGrowthTaskCondDef def;
@property (nonatomic) BOOL hasDef;
@property (nonatomic) NSString desc;
@property (nonatomic) q currentValue;
@property (nonatomic) q targetValue;
+ (id)descriptor;
@end
