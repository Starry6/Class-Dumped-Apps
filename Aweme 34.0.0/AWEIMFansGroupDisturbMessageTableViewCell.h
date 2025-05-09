@interface AWEIMFansGroupDisturbMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UIView baseView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UIImageView titleIcon;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) YYLabel contentLable;
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel disturbLabel;
@property (nonatomic) UISwitch disturbSwitch;
- (id)titleLable;
- (void)setTitleLable:;
- (void)configWithMessage:;
- (void)__trackShowData;
- (id)contentLable;
- (id)disturbLabel;
- (id)disturbSwitch;
- (void)__trackSettingClickData;
- (void)__handelCloseButtonCkicked:;
- (void)__handelDisturbSwitchChanged:;
- (void)__trackCloseData;
- (void)__trackMuteClickData;
- (void)performCellWithViewModel:;
- (void)setContentLable:;
- (void)setDisturbLabel:;
- (void)setDisturbSwitch:;
- (void)setBaseView:;
- (void).cxx_destruct;
- (id)baseView;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setTitleIcon:;
- (id)titleIcon;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
