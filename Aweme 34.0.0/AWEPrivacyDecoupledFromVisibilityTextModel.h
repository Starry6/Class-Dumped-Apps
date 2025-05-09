@interface AWEPrivacyDecoupledFromVisibilityTextModel : MTLModel
@property (nonatomic) NSString privacyDecouplingForPrivateAccountPopupTitle;
@property (nonatomic) NSString privacyDecouplingForPrivateAccountPopupContent;
@property (nonatomic) NSString duetDecouplingPopupTitle;
@property (nonatomic) NSString duetDecouplingPopupContent;
@property (nonatomic) NSString downloadDecouplingPopupTitle;
@property (nonatomic) NSString downloadDecouplingPopupContent;
@property (nonatomic) NSString storyShareDecouplingPopupTitle;
@property (nonatomic) NSString storyShareDecouplingPopupContent;
@property (nonatomic) NSString advanceSettingsTipsForPrivacyDecoupling;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)advanceSettingsTipsForPrivacyDecoupling;
- (id)privacyDecouplingForPrivateAccountPopupTitle;
- (id)privacyDecouplingForPrivateAccountPopupContent;
- (id)duetDecouplingPopupTitle;
- (id)duetDecouplingPopupContent;
- (id)storyShareDecouplingPopupTitle;
- (id)storyShareDecouplingPopupContent;
- (id)downloadDecouplingPopupTitle;
- (id)downloadDecouplingPopupContent;
- (void)setPrivacyDecouplingForPrivateAccountPopupTitle:;
- (void)setPrivacyDecouplingForPrivateAccountPopupContent:;
- (void)setDuetDecouplingPopupTitle:;
- (void)setDuetDecouplingPopupContent:;
- (void)setDownloadDecouplingPopupTitle:;
- (void)setDownloadDecouplingPopupContent:;
- (void)setStoryShareDecouplingPopupTitle:;
- (void)setStoryShareDecouplingPopupContent:;
- (void)setAdvanceSettingsTipsForPrivacyDecoupling:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
