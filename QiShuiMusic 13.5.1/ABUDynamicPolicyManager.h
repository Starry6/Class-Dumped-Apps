@interface ABUDynamicPolicyManager : ABUSingleton
@property (nonatomic) q ltDays;
@property (nonatomic) NSDictionary estimate;
@property (nonatomic) NSDictionary rules;
@property (nonatomic) NSDictionary ritRuleMap;
- (void)updateEstimate:;
- (void)updateRuleExcs:;
- (id)dynamicRuleWithPrimeRit:;
- (long long)ltDays;
- (id)ritRuleMap;
- (void)setLtDays:;
- (void)setRitRuleMap:;
- (void)updateDynamicPolicy:;
- (id)init;
- (id)rules;
- (id)estimate;
- (void)setRules:;
- (void).cxx_destruct;
- (void)setEstimate:;
+ (id)dynamicRuleWithPrimeRit:;
+ (void)updateDynamicPolicy:;
+ (id)sharedInstance;
@end
