@interface AWEConcernBellPushSettingPanelPermissionView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UISwitch permissionSwitch;
@property (nonatomic) @? switchAction;
- (void)initViews;
- (void)setSwitchAction:;
- (id)permissionSwitch;
- (void)p_clickPermissionSwitch:;
- (id)initWithFrame:switchAction:;
- (void)updateTitleWithStr:;
- (void)setPermissionSwitch:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)switchAction;
- (void)setSwitchIsOn:;
@end
