@interface WBSPasswordRuleSet : NSObject
@property (nonatomic) WBSAllowedPasswordRule allowedRule;
@property (nonatomic) NSArray requiredRules;
@property (nonatomic) WBSMaxConsecutivePasswordRule maxConsecutiveRule;
@property (nonatomic) WBSMinLengthPasswordRule minLengthRule;
@property (nonatomic) WBSMaxLengthPasswordRule maxLengthRule;
- (void).cxx_destruct;
- (id)initWithAllowedRule:requiredRules:maxConsecutiveRule:minLengthRule:maxLengthRule:;
- (id)allowedRule;
- (id)requiredRules;
- (id)maxConsecutiveRule;
- (id)minLengthRule;
- (id)maxLengthRule;
+ (id)ruleSetWithAllowedRule:requiredRules:maxConsecutiveRule:;
+ (id)ruleSetWithAllowedRule:requiredRules:maxConsecutiveRule:minLengthRule:maxLengthRule:;
@end
