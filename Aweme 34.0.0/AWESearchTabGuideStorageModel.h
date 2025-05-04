@interface AWESearchTabGuideStorageModel : AWEBaseApiModel
@property (nonatomic) AWESearchTabGuideActionModel action;
@property (nonatomic) AWESearchTabGuideExitRuleModel exitRule;
@property (nonatomic) AWESearchTabGuideExitRuleModel globalExitRule;
- (void)setExitRule:;
- (id)exitRule;
- (id)globalExitRule;
- (void)setGlobalExitRule:;
- (void)setAction:;
- (id)action;
- (void).cxx_destruct;
+ (id)exitRuleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)actionJSONTransformer;
@end
