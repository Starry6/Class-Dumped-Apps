@interface AWELongPressPanelAuthViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (BOOL)shouldForbidChangePrivacyForXiguaStartAtlas;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (BOOL)shouldShowPrivacySettingWithAwemeModel:;
+ (id)longPressPanelViewModel;
@end
