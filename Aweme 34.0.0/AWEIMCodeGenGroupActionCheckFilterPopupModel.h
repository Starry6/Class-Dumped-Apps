@interface AWEIMCodeGenGroupActionCheckFilterPopupModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString titleIconLight;
@property (nonatomic) NSString titleIconDark;
@property (nonatomic) NSString actionDesc;
@property (nonatomic) NSArray actionRuleListModelArray;
- (id)titleIconLight;
- (void)setTitleIconLight:;
- (id)titleIconDark;
- (void)setTitleIconDark:;
- (id)actionDesc;
- (void)setActionDesc:;
- (id)actionRuleListModelArray;
- (void)setActionRuleListModelArray:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
