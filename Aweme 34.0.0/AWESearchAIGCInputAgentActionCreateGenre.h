@interface AWESearchAIGCInputAgentActionCreateGenre : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString inputPlaceholder;
@property (nonatomic) NSString queryTemplate;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) NSArray requirementList;
@property (nonatomic) BOOL isSelected;
- (id)inputPlaceholder;
- (void)setInputPlaceholder:;
- (id)queryTemplate;
- (void)setQueryTemplate:;
- (id)requirementList;
- (void)setRequirementList:;
- (void)setIsSelected:;
- (BOOL)isDefault;
- (void)setIsDefault:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)requirementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
