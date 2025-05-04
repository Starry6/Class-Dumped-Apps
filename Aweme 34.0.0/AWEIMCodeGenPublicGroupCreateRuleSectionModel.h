@interface AWEIMCodeGenPublicGroupCreateRuleSectionModel : AWEBaseDataModel
@property (nonatomic) NSArray ruleListModelArray;
@property (nonatomic) NSInteger curStage;
- (id)ruleListModelArray;
- (int)curStage;
- (void)setCurStage:;
- (void)setRuleListModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
