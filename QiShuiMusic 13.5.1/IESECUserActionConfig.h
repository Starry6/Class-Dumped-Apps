@interface IESECUserActionConfig : MTLModel
@property (nonatomic) NSNumber isAutoTrigger;
@property (nonatomic) q life;
@property (nonatomic) NSString action;
@property (nonatomic) NSArray rulesList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)isAutoTrigger;
- (long long)life;
- (id)rulesList;
- (void)setIsAutoTrigger:;
- (void)setLife:;
- (void)setRulesList:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
+ (id)rulesListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
