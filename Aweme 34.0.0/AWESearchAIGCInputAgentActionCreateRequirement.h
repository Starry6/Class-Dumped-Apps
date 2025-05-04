@interface AWESearchAIGCInputAgentActionCreateRequirement : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString queryTemplate;
@property (nonatomic) NSArray optList;
@property (nonatomic) AWESearchAIGCInputAgentActionCreateRequirementOpt selectOption;
- (id)queryTemplate;
- (void)setQueryTemplate:;
- (id)optList;
- (void)setOptList:;
- (id)selectOption;
- (void)setSelectOption:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)optListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
