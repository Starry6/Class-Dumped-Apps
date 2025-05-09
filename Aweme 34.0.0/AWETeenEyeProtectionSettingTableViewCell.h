@interface AWETeenEyeProtectionSettingTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) TTTAttributedLabel attSubTitleLabel;
@property (nonatomic) UIView sepLine;
@property (nonatomic) UIView<AWESettingSwitchProtocol> switcher;
@property (nonatomic) AWETeenEyeProtectionSettingModel model;
@property (nonatomic) @? onSwitcherToggled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attributedLabel:didSelectLinkWithURL:;
- (void)configWithModel:;
- (void)setSepLine:;
- (id)sepLine;
- (id)switcher;
- (void)onSwitcherToggled:;
- (void)setSwitcher:;
- (void)setOnSwitcherToggled:;
- (id)attSubTitleLabel;
- (id)onSwitcherToggled;
- (void)setAttSubTitleLabel:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
+ (double)cellHeightWithModel:;
@end
