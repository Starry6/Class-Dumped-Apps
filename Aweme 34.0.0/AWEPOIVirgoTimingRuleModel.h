@interface AWEPOIVirgoTimingRuleModel : NSObject
@property (nonatomic) NSArray timingRuleList;
@property (nonatomic) AWEPOIVirgoRuleTask ruleModel;
- (void)setRuleModel:;
- (id)ruleModel;
- (id)timingRuleList;
- (id)initWithRuleModel:;
- (void)setTimingRuleList:;
- (void).cxx_destruct;
+ (id)modelWithData:ruleModel:;
@end
