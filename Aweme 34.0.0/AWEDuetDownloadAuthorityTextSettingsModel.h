@interface AWEDuetDownloadAuthorityTextSettingsModel : MTLModel
@property (nonatomic) NSString downloadSettingPrivateAccountToast;
@property (nonatomic) NSString downloadSettingOtherToast;
@property (nonatomic) NSString duetSettingPrivateAccountToast;
@property (nonatomic) NSString duetSettingGovMediaVipToast;
@property (nonatomic) NSString duetSettingOtherToast;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downloadSettingPrivateAccountToast;
- (id)downloadSettingOtherToast;
- (id)duetSettingGovMediaVipToast;
- (id)duetSettingOtherToast;
- (void)setDownloadSettingPrivateAccountToast:;
- (void)setDownloadSettingOtherToast:;
- (id)duetSettingPrivateAccountToast;
- (void)setDuetSettingPrivateAccountToast:;
- (void)setDuetSettingGovMediaVipToast:;
- (void)setDuetSettingOtherToast:;
- (id)init;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
