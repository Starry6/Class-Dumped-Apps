@interface AWEEnterpriseCompanyMenuFeature : AWEFeature
@property (nonatomic) AWEIMCompanyMenuView companyView;
@property (nonatomic) AWEEnterpriseCompanyMenuConfiguration configuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)companyView;
- (void)setCompanyView:;
- (void)hideSubMenu;
- (void)hideSwitchKeyboradButton:;
- (void)adjustSwitchKeyboardButtonWidth:leftMargin:;
- (void)fetchMenuWithConversationID:completion:;
- (unsigned long long)featureType;
- (void)setConfiguration:;
- (id)view;
- (void).cxx_destruct;
- (id)configuration;
+ (id)aliasName;
@end
