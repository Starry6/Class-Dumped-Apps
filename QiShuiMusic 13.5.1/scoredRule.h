@interface scoredRule : NSObject
@property (nonatomic) q ruleLabel;
@property (nonatomic) float ruleScore;
@property (nonatomic) NSNumber recipientUniqueID;
- (long long)compare:;
- (void).cxx_destruct;
- (id)initWithLabel:score:recipientUniqueID:;
- (long long)ruleLabel;
- (void)setRuleLabel:;
- (float)ruleScore;
- (void)setRuleScore:;
- (id)recipientUniqueID;
- (void)setRecipientUniqueID:;
@end
