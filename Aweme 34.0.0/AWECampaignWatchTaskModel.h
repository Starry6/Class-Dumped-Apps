@interface AWECampaignWatchTaskModel : MTLModel
@property (nonatomic) double taskValidInterval;
@property (nonatomic) q countDownDuration;
@property (nonatomic) q countDownInterval;
@property (nonatomic) q detailRefresh;
@property (nonatomic) NSArray triggers;
@property (nonatomic) NSArray scene;
@property (nonatomic) NSArray stateOutputer;
@property (nonatomic) NSString refer;
@property (nonatomic) AWECampaignFloatViewModel floatViewModel;
@property (nonatomic) AWECampaignTaskRuleMatcherModel taskRuleMathcerModel;
@property (nonatomic) AWECampaignEvadeRuleModel evadeRuleModel;
@property (nonatomic) AWECampaignTaskStateActionModel taskActionModel;
@property (nonatomic) NSDictionary logParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRefer:;
- (id)refer;
- (void)setCountDownInterval:;
- (long long)countDownInterval;
- (id)logParam;
- (void)setLogParam:;
- (id)taskRuleMathcerModel;
- (id)floatViewModel;
- (id)evadeRuleModel;
- (id)taskActionModel;
- (double)taskValidInterval;
- (void)setTaskValidInterval:;
- (long long)detailRefresh;
- (void)setDetailRefresh:;
- (id)stateOutputer;
- (void)setStateOutputer:;
- (void)setFloatViewModel:;
- (void)setTaskRuleMathcerModel:;
- (void)setEvadeRuleModel:;
- (void)setTaskActionModel:;
- (void)setScene:;
- (id)triggers;
- (id)scene;
- (void)setTriggers:;
- (void).cxx_destruct;
- (long long)countDownDuration;
- (void)setCountDownDuration:;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
