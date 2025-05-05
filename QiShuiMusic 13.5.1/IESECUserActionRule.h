@interface IESECUserActionRule : MTLModel
@property (nonatomic) BOOL isCycle;
@property (nonatomic) q ruleId;
@property (nonatomic) q condition;
@property (nonatomic) q probability;
@property (nonatomic) NSString ruleIdStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ruleIdStr;
- (void)setIsCycle:;
- (long long)condition;
- (void)setCondition:;
- (BOOL)isCycle;
- (long long)probability;
- (void)setProbability:;
- (void)setRuleId:;
- (long long)ruleId;
+ (id)JSONKeyPathsByPropertyKey;
@end
