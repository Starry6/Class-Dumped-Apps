@interface PSThirdPartyAppController : PSSpecifierController
@property (nonatomic) PSSystemPolicyForApp appPolicy;
@property (nonatomic) PSSystemPolicyForApp systemPolicy;
@property (nonatomic) PSDriverPolicyForApp driverPolicy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundle;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)showController:animate:;
- (void)setPreferenceValue:specifier:;
- (id)_readToggleSwitchSpecifierValue:;
- (void)_setToggleSwitchSpecifierValue:specifier:;
- (void)showPrivacyControllerForBundleID:;
- (void)showPrivacyControllerForBundleName:;
- (id)_uiValueFromValue:specifier:;
- (id)_valueFromUIValue:specifier:;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:;
- (id)systemPolicy;
- (void)setSystemPolicy:;
- (id)driverPolicy;
- (void)setDriverPolicy:;
- (id)appPolicy;
- (void)setAppPolicy:;
- (id)loadSpecifiers;
@end
