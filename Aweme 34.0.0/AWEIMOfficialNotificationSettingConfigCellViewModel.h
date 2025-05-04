@interface AWEIMOfficialNotificationSettingConfigCellViewModel : AWEIMOfficialNotificationSettingCellViewModel
@property (nonatomic) NSNumber selectedValue;
@property (nonatomic) UIViewController<IESIMHalfScreenViewControllerProtocol> actionSheetVC;
- (void)setActionSheetVC:;
- (id)actionSheetVC;
- (id)settingModel:subTitle:withIndex:isSelected:value:;
- (void)updateSettingForKey:value:;
- (void)onArrowTapped;
- (void).cxx_destruct;
- (id)selectedValue;
- (void)setSelectedValue:;
@end
