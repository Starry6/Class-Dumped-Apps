@interface AWEScreenshotPanelConfigTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton explainButton;
@property (nonatomic) DUXSettingSwitch switchButton;
@property (nonatomic) AWEScreenshotPanelConfigItemModel model;
@property (nonatomic) Q cornerType;
- (void)switchStatusChanged:;
- (void)setupCorners;
- (void)highlightWithAnimation;
- (void)highlightWithAnimationWithDuration:dismissDelay:;
- (void)setSwitchButton:;
- (id)explainButton;
- (void)setExplainButton:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)configureWithModel:;
- (unsigned long long)cornerType;
- (void)setCornerType:;
- (id)switchButton;
@end
