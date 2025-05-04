@interface AWEIMSecurityGlobalToastContentConfigModel_UIConfig_OptionModel_CheckboxModel : AWEBaseApiModel
@property (nonatomic) BOOL selectValue;
@property (nonatomic) q checkboxID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString reportValue;
@property (nonatomic) BOOL defaultChoose;
- (BOOL)selectValue;
- (void)setSelectValue:;
- (id)reportValue;
- (BOOL)defaultChoose;
- (void)setDefaultChoose:;
- (void)setReportValue:;
- (long long)checkboxID;
- (void)setCheckboxID:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setSelected:;
+ (id)JSONKeyPathsByPropertyKey;
@end
