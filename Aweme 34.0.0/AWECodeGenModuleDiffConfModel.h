@interface AWECodeGenModuleDiffConfModel : AWEBaseDataModel
@property (nonatomic) NSInteger forbidCompanyEdit;
@property (nonatomic) NSInteger forbidSettingsPermission;
@property (nonatomic) NSInteger forbidSocialTag;
@property (nonatomic) NSInteger forbidPostWorkCompanyBanner;
@property (nonatomic) NSInteger forbidPostWorkPlayletBar;
@property (nonatomic) NSInteger forbidSettingsTwoList;
- (int)forbidCompanyEdit;
- (void)setForbidCompanyEdit:;
- (int)forbidSettingsPermission;
- (void)setForbidSettingsPermission:;
- (int)forbidSocialTag;
- (void)setForbidSocialTag:;
- (int)forbidPostWorkCompanyBanner;
- (void)setForbidPostWorkCompanyBanner:;
- (int)forbidPostWorkPlayletBar;
- (void)setForbidPostWorkPlayletBar:;
- (int)forbidSettingsTwoList;
- (void)setForbidSettingsTwoList:;
+ (id)JSONKeyPathsByPropertyKey;
@end
