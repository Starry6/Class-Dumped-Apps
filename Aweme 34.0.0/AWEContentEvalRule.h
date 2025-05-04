@interface AWEContentEvalRule : NSObject
@property (nonatomic) NSString ruleExpression;
@property (nonatomic) NSArray factors;
@property (nonatomic) NSDictionary factorWeightMap;
- (void)setRuleExpression:;
- (id)ruleExpression;
- (long long)evaluateContentWithAwemeID:context:;
- (id)factorWeightMap;
- (void)setFactorWeightMap:;
- (void)setFactors:;
- (id)factors;
- (void).cxx_destruct;
+ (id)createWithConfig:;
@end
