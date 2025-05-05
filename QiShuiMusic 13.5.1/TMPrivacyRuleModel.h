@interface TMPrivacyRuleModel : NSObject
@property (nonatomic) NSString ruleKey;
@property (nonatomic) NSDictionary ruleConfig;
- (id)ruleKey;
- (id)ruleConfig;
- (void)setRuleConfig:;
- (void)setRuleKey:;
- (void).cxx_destruct;
- (id)jsonDict;
@end
