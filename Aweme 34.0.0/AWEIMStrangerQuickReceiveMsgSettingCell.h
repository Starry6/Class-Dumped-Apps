@interface AWEIMStrangerQuickReceiveMsgSettingCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView<IESIMCheckBoxProtocol> checkBox;
@property (nonatomic) UIView<IESIMDividerProtocol> divider;
@property (nonatomic) AWEIMStrangerQuickReceiveMsgViewModel viewModel;
@property (nonatomic) BOOL showDivider;
- (id)checkBox;
- (void)setCheckBox:;
- (void)setShowDivider:;
- (id)viewModel;
- (BOOL)showDivider;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateWithViewModel:;
- (void)updateChecked:;
- (id)divider;
- (void)setDivider:;
- (void)updateWithTitle:;
- (void)setUpUI;
@end
