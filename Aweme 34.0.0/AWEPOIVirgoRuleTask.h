@interface AWEPOIVirgoRuleTask : NSObject
@property (nonatomic) NSString factorKey;
@property (nonatomic) NSString taskKey;
@property (nonatomic) AWEPOIVirgoTimingRuleModel timingRule;
@property (nonatomic) AWEPOIVirgoUnitModel unitModel;
- (id)taskKey;
- (void)setTaskKey:;
- (void)setTimingRule:;
- (void)setUnitModel:;
- (id)timingRule;
- (id)unitModel;
- (id)factorKey;
- (void)setFactorKey:;
- (void).cxx_destruct;
+ (id)modelWithData:;
@end
