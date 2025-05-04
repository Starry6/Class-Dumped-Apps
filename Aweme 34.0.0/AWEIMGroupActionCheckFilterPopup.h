@interface AWEIMGroupActionCheckFilterPopup : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString titleIconLight;
@property (nonatomic) NSString titleIconDark;
@property (nonatomic) NSString actionDesc;
@property (nonatomic) NSArray actionRuleList;
- (id)titleIconLight;
- (void)setTitleIconLight:;
- (id)titleIconDark;
- (void)setTitleIconDark:;
- (id)actionDesc;
- (void)setActionDesc:;
- (id)actionRuleList;
- (void)setActionRuleList:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)actionRuleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
