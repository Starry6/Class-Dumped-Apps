@interface AWEIMGroupEntrySettingMenuMultiSelectModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString selectTypeTitle;
@property (nonatomic) NSString hintTitle;
@property (nonatomic) NSString selectTitle;
@property (nonatomic) NSString ruleDescription;
@property (nonatomic) NSArray selectMenuArray;
- (void)setSelectTitle:;
- (id)selectTitle;
- (void)setRuleDescription:;
- (id)selectMenuArray;
- (id)selectTypeTitle;
- (void)setSelectTypeTitle:;
- (void)setSelectMenuArray:;
- (id)hintTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)ruleDescription;
- (void)setHintTitle:;
+ (id)selectMenuArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
