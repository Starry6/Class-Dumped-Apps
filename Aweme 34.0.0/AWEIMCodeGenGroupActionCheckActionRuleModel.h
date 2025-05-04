@interface AWEIMCodeGenGroupActionCheckActionRuleModel : AWEBaseDataModel
@property (nonatomic) q groupActionRuleCheckType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL isMatch;
- (BOOL)isMatch;
- (void)setIsMatch:;
- (long long)groupActionRuleCheckType;
- (void)setGroupActionRuleCheckType:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
