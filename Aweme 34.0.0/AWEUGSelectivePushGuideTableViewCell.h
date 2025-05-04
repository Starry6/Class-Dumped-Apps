@interface AWEUGSelectivePushGuideTableViewCell : UITableViewCell
@property (nonatomic) UILabel leftTitleLabel;
@property (nonatomic) AWEUGInnerPushExtraSelectionModel model;
@property (nonatomic) DUXCheckBox checkBox;
@property (nonatomic) UIView seprateLine;
- (void)p_setupUI;
- (id)checkBox;
- (void)setCheckBox:;
- (id)leftTitleLabel;
- (id)seprateLine;
- (void)disabledAccessibilityElement:;
- (void)p_changeToSelect:;
- (void)configWithModel:shouldDisplaySeprateLine:;
- (void)setLeftTitleLabel:;
- (void)setSeprateLine:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setSelected:animated:;
@end
