@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule
@property (nonatomic) q compoundType;
@property (nonatomic) NSArray rules;
- (id)keyPaths;
- (id)rules;
- (id)predicate;
- (void)setRules:;
- (void).cxx_destruct;
- (id)initWithType:rules:;
- (id)currentValuesOfObject:;
- (long long)compoundType;
- (void)setCompoundType:;
+ (id)andCompoundPropertyValidationRuleWithRules:;
+ (id)orCompoundPropertyValidationRuleWithRules:;
@end
