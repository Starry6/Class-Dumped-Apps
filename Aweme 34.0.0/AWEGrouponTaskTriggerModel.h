@interface AWEGrouponTaskTriggerModel : MTLModel
@property (nonatomic) NSString triggerType;
@property (nonatomic) NSArray triggerSource;
@property (nonatomic) AWEGrouponTaskCombinationJudgeNode triggerCombination;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)triggerCombination;
- (void)setTriggerCombination:;
- (void).cxx_destruct;
- (id)triggerType;
- (void)setTriggerType:;
- (void)setTriggerSource:;
- (id)triggerSource;
+ (id)triggerCombinationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
