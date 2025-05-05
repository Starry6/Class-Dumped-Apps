@interface TSPKSceneRuleModel : NSObject
@property (nonatomic) q ruleId;
@property (nonatomic) NSString ruleName;
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSSet ruleIgnoreCondition;
- (id)ruleIgnoreCondition;
- (id)ruleName;
- (void)setRuleIgnoreCondition:;
- (void)setRuleName:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)params;
- (BOOL)isEqual:;
- (void)setParams:;
- (void)setRuleId:;
- (long long)ruleId;
+ (id)createWithDictionary:;
@end
