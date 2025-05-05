@interface HTSLiveStrategyRule : IESLivePBBaseMessage
@property (nonatomic) q strategyId;
@property (nonatomic) NSString strategyName;
@property (nonatomic) NSMutableArray featuresArray;
@property (nonatomic) Q featuresArray_Count;
@property (nonatomic) HTSLiveDefaultResult defaultValue;
@property (nonatomic) BOOL hasDefaultValue;
@property (nonatomic) NSMutableArray ruleDetailsArray;
@property (nonatomic) Q ruleDetailsArray_Count;
@property (nonatomic) NSInteger ruleType;
@property (nonatomic) q version;
@property (nonatomic) NSInteger strategyStatus;
- (id)initJsonRuleStrategyWith:;
- (id)initSimpleStrategyWithDolphin:;
- (BOOL)relatedWith:;
- (id)toDolphinStrategy;
- (id)mutableCopyWithZone:;
+ (id)descriptor;
@end
